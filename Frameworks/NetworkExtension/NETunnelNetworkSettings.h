//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEDNSSettings, NEProxySettings, NSString;

@interface NETunnelNetworkSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    NSString *_tunnelRemoteAddress;
    NEDNSSettings *_DNSSettings;
    NEProxySettings *_proxySettings;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NEProxySettings *proxySettings; // @synthesize proxySettings=_proxySettings;
@property(copy) NEDNSSettings *DNSSettings; // @synthesize DNSSettings=_DNSSettings;
@property(readonly) NSString *tunnelRemoteAddress; // @synthesize tunnelRemoteAddress=_tunnelRemoteAddress;
- (void).cxx_destruct;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTunnelRemoteAddress:(id)arg1;

@end

