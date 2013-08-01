//
//  UIView+PublicAutomation.h
//  Frank
//
//  Created by Sebastian on 7/31/13.
//
//

@interface UIView (PublicAutomation)

- (CGPoint)FEX_centerPoint;
- (CGPoint)FEX_pointFromX:(NSNumber*)x andY:(NSNumber*)y;
- (BOOL)FEX_isPointInWindow;
- (BOOL)FEX_isPointInDirectViewHierarchy:(CGPoint)point touchRecipient:(UIView**)touchRecipient;
- (BOOL)FEX_canTouchPoint:(CGPoint)point force:(BOOL)force raiseExceptions:(BOOL)raiseExceptions;
- (BOOL)FEX_canTouch;
- (BOOL)FEX_canTouchPointX:(NSNumber*)x y:(NSNumber*)y;
- (BOOL)FEX_touchPoint:(CGPoint)point;
- (BOOL)touch;
- (BOOL)FEX_forcedTouch;
- (BOOL)touchx:(NSNumber *)x y:(NSNumber *)y;
- (BOOL)doubleTapPoint:(CGPoint)point;
- (BOOL)doubleTap;
- (BOOL)doubleTapx:(NSNumber *)x y:(NSNumber *)y;
- (BOOL)touchAndHold:(NSTimeInterval)duration point:(CGPoint)point;
- (BOOL)touchAndHold:(CGFloat)duration;
- (BOOL)touchAndHold:(CGFloat)duration x:(NSNumber *)x y:(NSNumber *)y;
- (NSString *)swipeInDirection:(NSString *)strDir;

@end