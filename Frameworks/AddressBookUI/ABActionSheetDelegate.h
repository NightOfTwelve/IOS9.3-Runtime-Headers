//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AddressBookUI/UIActionSheetDelegate-Protocol.h>

@class NSString;

@interface ABActionSheetDelegate : NSObject <UIActionSheetDelegate>
{
    id _target;
    SEL _action;
}

- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)initWithActionSheetTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

