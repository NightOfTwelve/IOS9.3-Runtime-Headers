//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSFastEnumeration-Protocol.h>
#import <SpriteKit/NSMutableCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SKThreadSafeMutableDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
    int _storageLock;
    NSMutableDictionary *_storage;
}

- (void).cxx_destruct;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNSMutableDictionary:(id)arg1;

@end

