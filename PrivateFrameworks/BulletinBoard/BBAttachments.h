//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSCountedSet, NSMutableDictionary;

@interface BBAttachments : NSObject <NSCopying, NSSecureCoding>
{
    long long primaryType;
    NSCountedSet *_additionalAttachments;
    NSMutableDictionary *_clientSideComposedImageInfos;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *clientSideComposedImageInfos; // @synthesize clientSideComposedImageInfos=_clientSideComposedImageInfos;
@property(retain, nonatomic) NSCountedSet *additionalAttachments; // @synthesize additionalAttachments=_additionalAttachments;
@property(nonatomic) long long primaryType; // @synthesize primaryType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToAttachments:(id)arg1;
- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1;
- (unsigned long long)numberOfAdditionalAttachments;
- (void)addAttachmentOfType:(long long)arg1;
- (void)dealloc;

@end

