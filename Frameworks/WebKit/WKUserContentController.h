//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSString;

@interface WKUserContentController : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebUserContentControllerProxy> _userContentControllerProxy;
}

@property(readonly) struct Object *_apiObject;
- (void)removeScriptMessageHandlerForName:(id)arg1;
- (void)addScriptMessageHandler:(id)arg1 name:(id)arg2;
- (void)removeAllUserScripts;
- (void)addUserScript:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *userScripts;
- (void)dealloc;
- (id)init;
- (void)_removeAllUserContentFilters;
- (void)_removeUserContentFilter:(id)arg1;
- (void)_addUserContentFilter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

