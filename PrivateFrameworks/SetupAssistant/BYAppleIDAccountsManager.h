//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AALoginPluginManager, AASetupAssistantService;

@interface BYAppleIDAccountsManager : NSObject
{
    AALoginPluginManager *_appleIDLoginPluginManager;
    AASetupAssistantService *_aaService;
}

+ (id)sharedManager;
@property(retain, nonatomic, setter=setAAService:) AASetupAssistantService *aaService; // @synthesize aaService=_aaService;
- (void).cxx_destruct;
- (void)enableDataClassesForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loginDelegateAccountsWithUsername:(id)arg1 password:(id)arg2 skipiTunes:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initForDelegateBundleIDs:(id)arg1;

@end

