//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@interface PSUIAboutController : PSListController
{
    _Bool _firstViewDidAppear;
    id _effectiveSettingsChangedNotificationObserver;
}

@property(retain, nonatomic) id effectiveSettingsChangedNotificationObserver; // @synthesize effectiveSettingsChangedNotificationObserver=_effectiveSettingsChangedNotificationObserver;
- (void).cxx_destruct;
- (void)updateDeviceNameSpecifierIfNeeded;
- (id)deviceName:(id)arg1;
- (void)setDeviceName:(id)arg1 specifier:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)willUnlock;
- (id)init;

@end

