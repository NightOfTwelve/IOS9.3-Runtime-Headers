//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

__attribute__((visibility("hidden")))
@interface PULongPressableBarButtonItem : UIBarButtonItem
{
    id _longPressTarget;
    SEL _longPressAction;
}

- (void).cxx_destruct;
- (void)_longPressGestureRecognized:(id)arg1;
- (void)_addLongPressGestureToView:(id)arg1;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;

@end

