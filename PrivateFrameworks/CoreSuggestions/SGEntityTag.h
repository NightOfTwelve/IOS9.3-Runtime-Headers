//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>

@class NSString;

@interface SGEntityTag : NSObject <NSCopying>
{
    _Bool _indexed;
    _Bool _stored;
    _Bool _tracked;
    NSString *_name;
}

+ (id)testTag:(int)arg1;
+ (id)eventHash:(id)arg1;
+ (id)extractedFromTemplateWithShortName:(id)arg1;
+ (id)messageWithEmailKey:(id)arg1;
+ (id)messageWithMailMessageKey:(id)arg1;
+ (id)messageWithMessageId:(id)arg1 fromSource:(id)arg2;
+ (id)containsEntityExtraction:(long long)arg1;
+ (id)extraKey:(id)arg1;
+ (id)identity:(id)arg1;
+ (id)contactDetail:(id)arg1;
+ (id)mailingListId:(id)arg1;
+ (id)url:(id)arg1;
+ (id)tagForPrefix:(id)arg1 value:(id)arg2;
+ (id)isPartiallyDownloaded;
+ (id)fromReply;
+ (id)fromForwardedMessage;
+ (id)defaultDuration;
+ (id)naturalLanguageEvent;
+ (id)hardName;
+ (id)human;
+ (id)inhuman;
+ (id)allDay;
+ (id)extractedEventCancellation;
+ (id)fromExtractedDomain;
+ (id)extractedSocial;
+ (id)extractedFood;
+ (id)extractedMovie;
+ (id)extractedTicket;
+ (id)extractedCarRental;
+ (id)extractedHotel;
+ (id)extractedTrain;
+ (id)extractedBus;
+ (id)extractedFlight;
+ (id)extractedEvent;
+ (id)resolveName:(id)arg1;
+ (void)initialize;
+ (void)tombstonePrefix:(id)arg1;
+ (void)rememberPrefix:(id)arg1 stored:(_Bool)arg2 indexed:(_Bool)arg3 tracked:(_Bool)arg4;
+ (id)remember:(id)arg1;
@property(readonly, nonatomic) _Bool tracked; // @synthesize tracked=_tracked;
@property(readonly, nonatomic) _Bool stored; // @synthesize stored=_stored;
@property(readonly, nonatomic) _Bool indexed; // @synthesize indexed=_indexed;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isExtractedEventCategory;
- (_Bool)isEventHash;
- (_Bool)isTemplateShortName;
- (_Bool)isExtraKey;
- (_Bool)isContactDetail;
- (_Bool)isMailingListId;
- (_Bool)isUrl;
- (id)description;
- (id)value;
- (_Bool)isEqualToEntityTag:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 stored:(_Bool)arg2 indexed:(_Bool)arg3 tracked:(_Bool)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

