//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying>
{
    NSString *_actionLocKey;
    NSString *_category;
    NSString *_launchImage;
    NSMutableArray *_localizedArguments;
    NSString *_localizedKey;
    NSString *_soundName;
    NSString *_text;
}

@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
@property(retain, nonatomic) NSString *launchImage; // @synthesize launchImage=_launchImage;
@property(retain, nonatomic) NSString *actionLocKey; // @synthesize actionLocKey=_actionLocKey;
@property(retain, nonatomic) NSMutableArray *localizedArguments; // @synthesize localizedArguments=_localizedArguments;
@property(retain, nonatomic) NSString *localizedKey; // @synthesize localizedKey=_localizedKey;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCategory;
@property(readonly, nonatomic) _Bool hasSoundName;
@property(readonly, nonatomic) _Bool hasLaunchImage;
@property(readonly, nonatomic) _Bool hasActionLocKey;
- (id)localizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedArgumentsCount;
- (void)addLocalizedArguments:(id)arg1;
- (void)clearLocalizedArguments;
@property(readonly, nonatomic) _Bool hasLocalizedKey;
@property(readonly, nonatomic) _Bool hasText;

@end

