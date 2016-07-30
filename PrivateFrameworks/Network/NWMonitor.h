//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NWEndpoint, NWNetworkDescription, NWParameters;

@interface NWMonitor : NSObject
{
    long long _status;
    NWNetworkDescription *_bestAvailableNetworkDescription;
    NSArray *_networkDescriptionArray;
    NWEndpoint *_endpoint;
    NWParameters *_parameters;
    struct net_helper_endpoint_s *_helperEndpoint;
    unsigned long long _monitorResult;
}

+ (id)queue;
+ (void)saveMonitor:(id)arg1;
+ (id)getSavedMonitorForNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
+ (void)initialize;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property unsigned long long monitorResult; // @synthesize monitorResult=_monitorResult;
@property struct net_helper_endpoint_s *helperEndpoint; // @synthesize helperEndpoint=_helperEndpoint;
@property(readonly) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly) NSArray *networkDescriptionArray; // @synthesize networkDescriptionArray=_networkDescriptionArray;
@property(readonly) NWNetworkDescription *bestAvailableNetworkDescription; // @synthesize bestAvailableNetworkDescription=_bestAvailableNetworkDescription;
@property(readonly) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
@property(readonly, copy) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)matchesNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
- (void)cancel;
- (void)dealloc;
- (void)handleMessage:(id)arg1;
- (void)startHelperConnection;
- (id)initWithNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
- (id)initWithNetworkDescription:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;

@end

