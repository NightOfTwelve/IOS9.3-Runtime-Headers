//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKitUI/UIActionSheetDelegate-Protocol.h>

@class NSString, UIAlertController;

@interface EKUIRecurrenceAlertController : NSObject <UIActionSheetDelegate>
{
    UIAlertController *_alertController;
    CDUnknownBlockType _completionHandler;
}

+ (id)presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 stringForDeleteButton:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)newAlertControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completeWithSelection:(int)arg1;
- (void)cancelAnimated:(_Bool)arg1;
- (void)_presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2;
- (void)_presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 stringForDeleteButton:(id)arg3;
- (_Bool)_useSheetForViewController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

