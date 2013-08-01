
#import "UITableView+Frank.h"
#import "UIView+PublicAutomation.h"

@implementation UITableView (Frank)

- (void) scrollToCell:(NSNumber *)row inSection:(NSNumber *)section {
    UITableView *table = (UITableView *)self;
    
    NSIndexPath *indexPath = [NSIndexPath indexPathForRow: [row integerValue]
                                                inSection: [section integerValue]];
    [table scrollToRowAtIndexPath:indexPath atScrollPosition:UITableViewScrollPositionTop animated:NO];
}
 
- (BOOL) touchCell:(NSNumber *)row inSection:(NSNumber *)section{
    NSIndexPath *indexPath = [NSIndexPath indexPathForRow: [row integerValue]
                                                inSection: [section integerValue]];
    UITableViewCell *cell = [self cellForRowAtIndexPath: indexPath];
    
    return [cell touch];
}

- (BOOL) longTouchCell:(NSNumber *)row inSection:(NSNumber *)section{
    NSIndexPath *indexPath = [NSIndexPath indexPathForRow: [row integerValue]
                                                inSection: [section integerValue]];
    UITableViewCell *cell = [self cellForRowAtIndexPath: indexPath];
    
    return [cell touchAndHold:1];
}

- (id) callMethod:(NSString *)method onCell:(NSNumber *)row inSection:(NSNumber *)section{
    NSIndexPath *indexPath = [NSIndexPath indexPathForRow: [row integerValue]
                                                inSection: [section integerValue]];
    UITableViewCell *cell = [self cellForRowAtIndexPath: indexPath];
    
    SEL sel = NSSelectorFromString (method);
    if ([cell respondsToSelector: sel])
        return [cell performSelector: sel];
    else
        return nil;
}

@end