//
//  ASWeekSelectorView.h
//  TripGo
//
//  Created by Adrian Schoenig on 15/04/2014.
//
//

#import <UIKit/UIKit.h>

@protocol ASWeekSelectorViewDelegate;

@interface ASWeekSelectorView : UIView

/**
 The delegate conforming to the `ASWeekSelectorViewDelegate` delegate.
 */
@property (nonatomic, weak) id<ASWeekSelectorViewDelegate> delegate;

/**
 Index of the first day of the week, same as used by `NSCalendar`.
 @default 1, i.e., Sunday
 */
@property (nonatomic, assign) NSUInteger firstWeekday;

/**
 The selected date which is highlighted in the view. When setting this property, the view will also jump to show that date.
 */
@property (nonatomic, strong) NSDate *selectedDate;

/**
 @param selectedDate The date to be selected and shown.
 @param animated     Selection should be animated.
 */
- (void)setSelectedDate:(NSDate *)selectedDate animated:(BOOL)animated;

@end

@protocol ASWeekSelectorViewDelegate <NSObject>

/**
 Called on the delegate whenever the user interacts with the view and selects a new date.
 
 @param weekSelector The week selector that the user interacted with.
 @param date         The selected date.
 */
- (void)weekSelector:(ASWeekSelectorView *)weekSelector selectedDate:(NSDate *)date;

@end