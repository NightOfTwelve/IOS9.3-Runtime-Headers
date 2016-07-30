//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SUViewControllerContext : NSObject <NSCoding>
{
    NSMutableDictionary *_metadata;
    NSString *_sectionIdentifier;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
- (id)_typeStringForType:(long long)arg1;
- (long long)_typeForTypeString:(id)arg1;
- (id)valueForMetadataKey:(id)arg1;
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyViewController;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

