//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAdServices/ADAdSheetConnectionDelegate-Protocol.h>
#import <iAdServices/ADAdSheetProxyDelegate-Protocol.h>

@class ADAdSheetConnection, NSString;

@interface ADAnalytics : NSObject <ADAdSheetConnectionDelegate, ADAdSheetProxyDelegate>
{
    ADAdSheetConnection *_connection;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ADAdSheetConnection *connection; // @synthesize connection=_connection;
- (id)additionalAdSheetLaunchOptions;
- (_Bool)shouldLaunchAdSheet;
- (void)reportIngestionForPassWithTeamIdentifier:(id)arg1 passTypeIdentifier:(id)arg2 serialNumber:(id)arg3 iAdReportingIdentifier:(id)arg4;
- (void)configureConnection:(id)arg1;
- (id)adSheetMachServiceName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

