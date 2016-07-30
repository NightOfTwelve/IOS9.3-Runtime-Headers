//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, NSURL, PKContent, PKDataAccessor, PKDisplayProfile, PKImageSet;

@interface PKObject : NSObject <NSCopying, NSSecureCoding>
{
    PKImageSet *_imageSets[6];
    _Bool _initializedViaInitWithCoder;
    NSString *_uniqueID;
    NSData *_manifestHash;
    PKDataAccessor *_dataAccessor;
    PKDisplayProfile *_displayProfile;
    double _preferredImageScale;
    NSString *_preferredImageSuffix;
    NSURL *_webServiceURL;
    NSString *_authenticationToken;
    unsigned long long _settings;
    long long _shareCount;
    PKContent *_content;
}

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)defaultSettings;
+ (_Bool)isValidObjectWithFileURL:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
@property(retain, nonatomic) PKContent *content; // @synthesize content=_content;
@property(readonly, nonatomic) _Bool initializedViaInitWithCoder; // @synthesize initializedViaInitWithCoder=_initializedViaInitWithCoder;
@property(nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property(nonatomic) unsigned long long settings; // @synthesize settings=_settings;
@property(copy, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(copy, nonatomic) NSURL *webServiceURL; // @synthesize webServiceURL=_webServiceURL;
@property(retain, nonatomic) NSString *preferredImageSuffix; // @synthesize preferredImageSuffix=_preferredImageSuffix;
@property(nonatomic) double preferredImageScale; // @synthesize preferredImageScale=_preferredImageScale;
@property(retain, nonatomic) PKDisplayProfile *displayProfile; // @synthesize displayProfile=_displayProfile;
@property(retain, nonatomic) PKDataAccessor *dataAccessor; // @synthesize dataAccessor=_dataAccessor;
@property(copy, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setMissingImageSetsFromObject:(id)arg1;
- (_Bool)isImageSetType:(long long)arg1 equalToImageSetTypeFromObject:(id)arg2;
- (id)imageSetLoadedIfNeeded:(long long)arg1;
- (id)contentLoadedIfNeeded;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (void)reloadDisplayProfileOfType:(long long)arg1;
- (void)setSettingsWithoutUpdatingDataAccessor:(unsigned long long)arg1;
@property(readonly, retain, nonatomic) NSDate *modificationDate;
@property(readonly, retain, nonatomic) NSData *serializedFileWrapper;
@property(readonly, retain, nonatomic) NSData *archiveData;
- (id)localizedString:(id)arg1;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool remoteAssetsDownloaded;
- (void)noteShared;
- (void)requestUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateImageSetCachesAtURL:(id)arg1;
- (void)flushImageSetOfType:(long long)arg1;
- (void)flushLoadedImageSets;
- (void)loadImageSetAsync:(long long)arg1 preheat:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)loadImageSetSync:(long long)arg1 preheat:(_Bool)arg2;
- (_Bool)isImageSetLoaded:(long long)arg1;
- (void)flushFormattedFieldValues;
- (void)flushLoadedContent;
- (void)loadContentAsyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadContentSync;
- (_Bool)isContentLoaded;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)initWithFileDataAccessor:(id)arg1;
- (id)initWithFileURL:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
- (id)initWithData:(id)arg1 error:(id *)arg2;

@end

