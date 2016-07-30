//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSArray, NSString, NWEndpoint, NWInterface, NWParameters;
@protocol OS_nw_path, OS_xpc_object;

@interface NWPath : NSObject <NWPrettyDescription>
{
    NSObject<OS_nw_path> *_internalPath;
}

+ (id)statusToString:(long long)arg1;
@property(readonly) NSObject<OS_nw_path> *internalPath; // @synthesize internalPath=_internalPath;
- (void).cxx_destruct;
@property(readonly) _Bool supportsDNS;
@property(readonly) _Bool supportsIPv6;
@property(readonly) _Bool supportsIPv4;
@property(retain) NWEndpoint *derivedEndpoint;
@property(retain) NSObject<OS_xpc_object> *mptcpInterfaceDetails;
@property(retain) NSObject<OS_xpc_object> *proxySettings;
@property(readonly, getter=isHelperWaiting) _Bool helperWaiting;
@property(readonly) int helperClientPID;
@property(readonly) unsigned long long helperClientID;
@property _Bool hasFallbackActivity;
@property(readonly) _Bool fallbackIsWeak;
@property(readonly) unsigned int fallbackInterfaceIndex;
@property(retain) NSString *ledbellyClientID;
- (void)setMPTCPAllowed:(_Bool)arg1 fallbackInterfaceIndex:(unsigned long long)arg2;
@property(readonly) _Bool mptcpAllowed;
@property _Bool duetProhibitExpensive;
@property _Bool hasPower;
@property(readonly, getter=isFromHelper) _Bool fromHelper;
@property(readonly) NWParameters *derivedParameters;
@property(readonly, getter=isRoaming) _Bool roaming;
@property(readonly) NSString *ssid;
@property(readonly) unsigned int policyID;
@property(readonly, getter=isDirect) _Bool direct;
@property(readonly, getter=isLocal) _Bool local;
@property(readonly) unsigned int filterControlUnit;
@property(readonly, getter=isFiltered) _Bool filtered;
@property(readonly) int dnsServiceID;
- (_Bool)hasUnsatisfiedFallbackAgent;
- (_Bool)unsatisfiedVoluntaryAgentMatchesAddress:(id)arg1 triggerImmediately:(_Bool *)arg2;
- (id)copyFlowDivertToken;
@property(readonly) unsigned int flowDivertControlUnit;
@property(readonly, getter=isFlowDivert) _Bool flowDivert;
@property(readonly) NSString *reasonDescription;
@property(readonly) long long reason;
@property(readonly) long long mtu;
@property(readonly) NSArray *dnsServers;
@property(readonly) NWInterface *fallbackInterface;
@property(readonly) NWInterface *interface;
@property(readonly) NWInterface *scopedInterface;
- (id)inactiveNetworkAgentUUIDsOnlyVoluntary:(_Bool)arg1;
- (id)genericNetworkAgentsWithDomain:(id)arg1 type:(id)arg2;
- (id)networkAgentsOfType:(Class)arg1;
- (_Bool)usesNetworkAgent:(id)arg1;
- (_Bool)usesNetworkAgentType:(Class)arg1;
- (_Bool)usesInterfaceType:(long long)arg1;
@property(readonly, getter=isExpensive) _Bool expensive;
@property(readonly) long long status;
- (_Bool)isEqualToPath:(id)arg1;
@property(readonly, copy) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
@property(readonly) NSString *statusAsString;
- (id)initWithPath:(id)arg1;
- (id)init;

@end
