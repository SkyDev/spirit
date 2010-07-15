/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITouch, UIImageView, UIWebSelectionView;

__attribute__((visibility("hidden")))
@interface UIWebSelectionHandle : UIView {
@private
	UITouch* _touch;
	UIImageView* _dragDotView;
	int _position;
	int _textPosition;
	UIWebSelectionView* _tintView;
	CGSize _touchToCenterOffset;
	CGSize _centerToSelectionPointOffset;
}
@property(assign, nonatomic) int position;
@property(retain, nonatomic) UITouch* touch;
@property(readonly, assign, nonatomic) CGSize touchToCenterOffset;
@property(assign, nonatomic) CGSize centerToSelectionPointOffset;
@property(readonly, assign, nonatomic) BOOL hasTextPosition;
@property(assign, nonatomic) int textPosition;
-(id)initWithPosition:(int)position tintView:(id)view;
-(void)dealloc;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)dropActiveTouch;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(CGPoint)applyTouchToCenterOffset:(CGPoint)centerOffset;
-(CGPoint)applyCenterToSelectionPointOffset:(CGPoint)selectionPointOffset;
-(CGPoint)applyOffsetInDirectionOfHandle:(float)handle toPoint:(CGPoint)point;
-(float)offsetInDirectionOfHandleFromFirstPoint:(CGPoint)firstPoint toSecondPoint:(CGPoint)secondPoint;
-(void)snapToCornerOfRange:(id)range atStart:(BOOL)start;
-(CGPoint)suggestedHandlePositionOnRect:(CGRect)rect;
@end
