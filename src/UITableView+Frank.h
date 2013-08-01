#import <Foundation/Foundation.h>

@interface UITableView (Frank)

- (void) scrollToCell:(NSNumber*)row inSection:(NSNumber*)section;
- (BOOL) touchCell:(NSNumber*)row inSection:(NSNumber*)section;
- (BOOL) longTouchCell:(NSNumber *)row inSection:(NSNumber*)section;
- (id) callMethod:(NSString *)method onCell:(NSNumber *)row inSection:(NSNumber *)section;

@end