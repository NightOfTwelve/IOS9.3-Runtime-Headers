//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL, UIImage, WBSAutomaticReadingListSocialSource;

@interface WBSAutomaticReadingListItem : NSObject
{
    UIImage *_fallbackProfileImage;
    _Bool _repostedByAuthenticatedUser;
    _Bool _fetchingProfileImage;
    NSString *_uniqueIdentifier;
    id _sourceRecordID;
    NSDate *_sourceRecordCreationDate;
    NSString *_sourceRecordText;
    id _originatorID;
    NSString *_originatorDisplayName;
    NSString *_urlString;
    NSString *_reposterDisplayName;
    NSString *_reposterScreenName;
    UIImage *_originatorProfileImage;
    NSString *_socialSourceAccountIdentifier;
    UIImage *_serviceImage;
}

+ (id)keyPathsForValuesAffectingDomainString;
@property(nonatomic) _Bool fetchingProfileImage; // @synthesize fetchingProfileImage=_fetchingProfileImage;
@property(retain, nonatomic) UIImage *serviceImage; // @synthesize serviceImage=_serviceImage;
@property(readonly, copy, nonatomic) NSString *socialSourceAccountIdentifier; // @synthesize socialSourceAccountIdentifier=_socialSourceAccountIdentifier;
@property(nonatomic, getter=isRepostedByAuthenticatedUser) _Bool repostedByAuthenticatedUser; // @synthesize repostedByAuthenticatedUser=_repostedByAuthenticatedUser;
@property(retain, nonatomic) UIImage *originatorProfileImage; // @synthesize originatorProfileImage=_originatorProfileImage;
@property(readonly, nonatomic) NSString *reposterScreenName; // @synthesize reposterScreenName=_reposterScreenName;
@property(readonly, nonatomic) NSString *reposterDisplayName; // @synthesize reposterDisplayName=_reposterDisplayName;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, copy, nonatomic) NSString *originatorDisplayName; // @synthesize originatorDisplayName=_originatorDisplayName;
@property(readonly, copy, nonatomic) id originatorID; // @synthesize originatorID=_originatorID;
@property(readonly, copy, nonatomic) NSString *sourceRecordText; // @synthesize sourceRecordText=_sourceRecordText;
@property(readonly, copy, nonatomic) NSDate *sourceRecordCreationDate; // @synthesize sourceRecordCreationDate=_sourceRecordCreationDate;
@property(readonly, copy, nonatomic) id sourceRecordID; // @synthesize sourceRecordID=_sourceRecordID;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)_fetchOriginatorProfileImageForSize:(struct CGSize)arg1;
- (void)_getFallbackImage;
- (void)updateFallbackImageIfNecessary;
- (id)bestOriginatorProfileImageForSize:(struct CGSize)arg1;
- (_Bool)isAcceptableOriginatorProfileImage:(id)arg1;
@property(readonly, nonatomic) NSURL *biggerOriginatorProfileImageURL;
@property(readonly, nonatomic) NSURL *originatorProfileImageURL;
@property(readonly, nonatomic) struct _NSRange emphasizedTextRange;
@property(readonly, nonatomic) struct _NSRange displayURLRange;
@property(readonly, nonatomic) NSString *continuousBannerTitle;
@property(readonly, nonatomic) NSString *continuousBannerDisplayString;
@property(readonly, nonatomic) NSString *displayString;
@property(readonly, nonatomic) NSURL *originatorProfileURL;
@property(readonly, nonatomic) NSURL *sourceRecordURL;
@property(readonly, nonatomic) NSString *domainString;
@property(readonly, nonatomic) WBSAutomaticReadingListSocialSource *socialSource;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2;

@end

