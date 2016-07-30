//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileReactorProxy.h>

__attribute__((visibility("hidden")))
@interface NSFileProviderProxy : NSFileReactorProxy
{
    _Bool _wantsWriteNotifications;
}

@property _Bool wantsWriteNotifications; // @synthesize wantsWriteNotifications=_wantsWriteNotifications;
- (void)observeEndOfWriteAtLocation:(id)arg1 forAccessClaim:(id)arg2;
- (void)observePresentationChangeOfKind:(id)arg1 withPresenter:(id)arg2 url:(id)arg3 newURL:(id)arg4;
- (void)provideLogicalURLForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)providePhysicalURLForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)provideItemAtURL:(id)arg1 recursively:(_Bool)arg2 forAccessClaim:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)forwardUsingMessageSender:(CDUnknownBlockType)arg1;
- (void)setItemLocation:(id)arg1;

@end

