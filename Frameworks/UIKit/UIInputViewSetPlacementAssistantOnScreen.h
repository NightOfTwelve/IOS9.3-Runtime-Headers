//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInputViewSetPlacement.h>

#import <UIKit/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementAssistantOnScreen : UIInputViewSetPlacement <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1;
- (_Bool)inputViewWillAppear;
- (_Bool)accessoryViewWillAppear;
- (_Bool)showsInputViews;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end

