//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPUFoundation/MPUViewControllerFactory-Protocol.h>
#import <MPUFoundation/UIViewControllerRestoration-Protocol.h>

@class NSString;

@interface MPUViewControllerFactory : NSObject <MPUViewControllerFactory, UIViewControllerRestoration>
{
}

+ (id)_existingViewControllerWithRestorationIdentifierPath:(id)arg1;
+ (id)_allConfigurations;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (id)viewControllerForIdentifier:(id)arg1 withDataSource:(id)arg2;
+ (id)viewControllerForIdentifier:(id)arg1 withQuery:(id)arg2;
+ (id)viewControllerForIdentifier:(id)arg1;
+ (void)registerViewControllerIdentifiers;
+ (void)registerViewControllerIdentifier:(id)arg1 withConfigurationBlock:(CDUnknownBlockType)arg2;
+ (void)registerViewControllerIdentifier:(id)arg1 withConfiguration:(id)arg2;
+ (id)dataSourceForViewControllerIdentifier:(id)arg1 withQuery:(id)arg2;
+ (id)dataSourceForViewControllerIdentifier:(id)arg1;
+ (id)configurationForViewControllerIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

