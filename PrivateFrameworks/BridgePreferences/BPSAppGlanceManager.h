//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BridgePreferences/BPSInternalGlanceObserverDelegate-Protocol.h>

@class BPSInternalGlanceManager, NGSGlance, NSString, PSListController;

@interface BPSAppGlanceManager : NSObject <BPSInternalGlanceObserverDelegate>
{
    PSListController *_listControllerDelegate;
    NGSGlance *_glance;
    BPSInternalGlanceManager *_manager;
}

@property(retain, nonatomic) BPSInternalGlanceManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NGSGlance *glance; // @synthesize glance=_glance;
@property(nonatomic) __weak PSListController *listControllerDelegate; // @synthesize listControllerDelegate=_listControllerDelegate;
- (void).cxx_destruct;
- (void)_logGlanceDescriptions;
- (id)showsGlance:(id)arg1;
- (void)setShowsGlance:(id)arg1 forSpecifier:(id)arg2;
- (id)glanceSpecifierForIdentifier:(id)arg1;
- (void)settingsManagerReloadedGlances:(id)arg1;
- (void)loadSettings;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

