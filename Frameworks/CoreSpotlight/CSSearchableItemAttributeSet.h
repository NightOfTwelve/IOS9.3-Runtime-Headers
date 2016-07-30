//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/NSCopying-Protocol.h>
#import <CoreSpotlight/NSSecureCoding-Protocol.h>

@class CSDecoder, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface CSSearchableItemAttributeSet : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hasCodedCustomAttributes;
    NSDictionary *_attributes;
    NSString *_contentType;
    NSMutableDictionary *_mutableAttributes;
    NSMutableDictionary *_customAttributes;
    long long _searchableItemFlags;
    CSDecoder *_decoder;
    CSDecoder *_contentDecoder;
    CDStruct_b7fac349 _codedAttributes;
    CDStruct_b7fac349 _codedCustomAttributes;
    CDStruct_b7fac349 _contentObj;
}

+ (id)_sharedAttributeKeySet;
+ (id)_allKeys;
+ (_Bool)supportsSecureCoding;
+ (id)_requiredAttributesForContentType:(id)arg1;
@property(readonly, nonatomic) _Bool hasCodedCustomAttributes; // @synthesize hasCodedCustomAttributes=_hasCodedCustomAttributes;
@property(readonly, nonatomic) CDStruct_b7fac349 contentObj; // @synthesize contentObj=_contentObj;
@property(readonly, nonatomic) CDStruct_b7fac349 codedCustomAttributes; // @synthesize codedCustomAttributes=_codedCustomAttributes;
@property(readonly, nonatomic) CDStruct_b7fac349 codedAttributes; // @synthesize codedAttributes=_codedAttributes;
@property(readonly, nonatomic) CSDecoder *contentDecoder; // @synthesize contentDecoder=_contentDecoder;
@property(readonly, nonatomic) CSDecoder *decoder; // @synthesize decoder=_decoder;
@property long long searchableItemFlags; // @synthesize searchableItemFlags=_searchableItemFlags;
@property(readonly) NSMutableDictionary *customAttributes; // @synthesize customAttributes=_customAttributes;
@property(readonly) NSMutableDictionary *mutableAttributes; // @synthesize mutableAttributes=_mutableAttributes;
@property(readonly) NSString *contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setContentObj:(id)arg1 obj:(CDStruct_b7fac349)arg2;
- (id)initWithDecoder:(id)arg1 obj:(CDStruct_b7fac349)arg2;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void)addAttributesFromDictionary:(id)arg1;
- (void)addAttributesFromAttributeSet:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (id)_getNonNullValueForKey:(id)arg1;
- (void)_setOrRemoveValue:(id)arg1 forKey:(id)arg2 copy:(_Bool)arg3;
- (void)_setOrRemoveValue:(id)arg1 forKey:(id)arg2;
- (id)customAttributeDictionary;
- (id)attributeDictionary;
- (id)requiredAttributes;
- (_Bool)isValidAttributeSet;
- (id)serializedAttributes;
- (id)initWithSerializedAttributes:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithItemContentType:(id)arg1;
- (id)initWithAttributesSet:(id)arg1;
- (id)init;
- (id)isLikelyJunk;
- (void)setLikelyJunk:(id)arg1;
- (id)URL;
- (void)setURL:(id)arg1;
- (id)originalSource;
- (void)setOriginalSource:(id)arg1;
- (id)originalFormat;
- (void)setOriginalFormat:(id)arg1;
- (id)performers;
- (void)setPerformers:(id)arg1;
- (id)genre;
- (void)setGenre:(id)arg1;
- (id)producer;
- (void)setProducer:(id)arg1;
- (id)director;
- (void)setDirector:(id)arg1;
- (id)information;
- (void)setInformation:(id)arg1;
- (id)supportFileType;
- (void)setSupportFileType:(id)arg1;
- (id)isApplicationManaged;
- (void)setApplicationManaged:(id)arg1;
- (id)applicationCategories;
- (void)setApplicationCategories:(id)arg1;
- (id)executablePlatform;
- (void)setExecutablePlatform:(id)arg1;
- (id)executableArchitectures;
- (void)setExecutableArchitectures:(id)arg1;
- (id)bundleIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (id)musicalInstrumentName;
- (void)setMusicalInstrumentName:(id)arg1;
- (id)musicalInstrumentCategory;
- (void)setMusicalInstrumentCategory:(id)arg1;
- (id)appleLoopDescriptors;
- (void)setAppleLoopDescriptors:(id)arg1;
- (id)appleLoopsLoopMode;
- (void)setAppleLoopsLoopMode:(id)arg1;
- (id)appleLoopsKeyFilterType;
- (void)setAppleLoopsKeyFilterType:(id)arg1;
- (id)appleLoopsRootKey;
- (void)setAppleLoopsRootKey:(id)arg1;
- (id)fontNames;
- (void)setFontNames:(id)arg1;
- (id)finderComment;
- (void)setFinderComment:(id)arg1;
- (id)kind;
- (void)setKind:(id)arg1;
- (id)instantMessageAddresses;
- (void)setInstantMessageAddresses:(id)arg1;
- (id)emailAddresses;
- (void)setEmailAddresses:(id)arg1;
- (id)supportsPhoneCall;
- (void)setSupportsPhoneCall:(id)arg1;
- (id)phoneNumbers;
- (void)setPhoneNumbers:(id)arg1;
- (id)contentRating;
- (void)setContentRating:(id)arg1;
- (id)isLocal;
- (void)setLocal:(id)arg1;
- (id)playCount;
- (void)setPlayCount:(id)arg1;
- (id)ratingDescription;
- (void)setRatingDescription:(id)arg1;
- (id)rating;
- (void)setRating:(id)arg1;
- (id)importantDates;
- (void)setImportantDates:(id)arg1;
- (id)endDate;
- (void)setEndDate:(id)arg1;
- (id)startDate;
- (void)setStartDate:(id)arg1;
- (id)completionDate;
- (void)setCompletionDate:(id)arg1;
- (id)dueDate;
- (void)setDueDate:(id)arg1;
- (id)encodingApplications;
- (void)setEncodingApplications:(id)arg1;
- (id)creator;
- (void)setCreator:(id)arg1;
- (id)securityMethod;
- (void)setSecurityMethod:(id)arg1;
- (id)pageHeight;
- (void)setPageHeight:(id)arg1;
- (id)pageWidth;
- (void)setPageWidth:(id)arg1;
- (id)fileSize;
- (void)setFileSize:(id)arg1;
- (id)pageCount;
- (void)setPageCount:(id)arg1;
- (id)audiences;
- (void)setAudiences:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)contentDescription;
- (void)setContentDescription:(id)arg1;
- (id)theme;
- (void)setTheme:(id)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)coverage;
- (void)setCoverage:(id)arg1;
- (id)contributors;
- (void)setContributors:(id)arg1;
- (id)publishers;
- (void)setPublishers:(id)arg1;
- (id)rights;
- (void)setRights:(id)arg1;
- (id)languages;
- (void)setLanguages:(id)arg1;
- (id)role;
- (void)setRole:(id)arg1;
- (id)organizations;
- (void)setOrganizations:(id)arg1;
- (id)isGeneralMIDISequence;
- (void)setGeneralMIDISequence:(id)arg1;
- (id)musicalGenre;
- (void)setMusicalGenre:(id)arg1;
- (id)recordingDate;
- (void)setRecordingDate:(id)arg1;
- (id)audioTrackNumber;
- (void)setAudioTrackNumber:(id)arg1;
- (id)lyricist;
- (void)setLyricist:(id)arg1;
- (id)composer;
- (void)setComposer:(id)arg1;
- (id)audioEncodingApplication;
- (void)setAudioEncodingApplication:(id)arg1;
- (id)timeSignature;
- (void)setTimeSignature:(id)arg1;
- (id)keySignature;
- (void)setKeySignature:(id)arg1;
- (id)tempo;
- (void)setTempo:(id)arg1;
- (id)audioChannelCount;
- (void)setAudioChannelCount:(id)arg1;
- (id)audioSampleRate;
- (void)setAudioSampleRate:(id)arg1;
- (id)GPSDifferental;
- (void)setGPSDifferental:(id)arg1;
- (id)GPSDateStamp;
- (void)setGPSDateStamp:(id)arg1;
- (id)GPSAreaInformation;
- (void)setGPSAreaInformation:(id)arg1;
- (id)GPSProcessingMethod;
- (void)setGPSProcessingMethod:(id)arg1;
- (id)GPSDestDistance;
- (void)setGPSDestDistance:(id)arg1;
- (id)GPSDestBearing;
- (void)setGPSDestBearing:(id)arg1;
- (id)GPSDestLongitude;
- (void)setGPSDestLongitude:(id)arg1;
- (id)GPSDestLatitude;
- (void)setGPSDestLatitude:(id)arg1;
- (id)GPSMapDatum;
- (void)setGPSMapDatum:(id)arg1;
- (id)GPSDOP;
- (void)setGPSDOP:(id)arg1;
- (id)GPSMeasureMode;
- (void)setGPSMeasureMode:(id)arg1;
- (id)GPSStatus;
- (void)setGPSStatus:(id)arg1;
- (id)GPSTrack;
- (void)setGPSTrack:(id)arg1;
- (id)namedLocation;
- (void)setNamedLocation:(id)arg1;
- (id)imageDirection;
- (void)setImageDirection:(id)arg1;
- (id)timestamp;
- (void)setTimestamp:(id)arg1;
- (id)speed;
- (void)setSpeed:(id)arg1;
- (id)supportsNavigation;
- (void)setSupportsNavigation:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)altitude;
- (void)setAltitude:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)stateOrProvince;
- (void)setStateOrProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)instructions;
- (void)setInstructions:(id)arg1;
- (id)headline;
- (void)setHeadline:(id)arg1;
- (id)exposureTimeString;
- (void)setExposureTimeString:(id)arg1;
- (id)exposureProgram;
- (void)setExposureProgram:(id)arg1;
- (id)fNumber;
- (void)setFNumber:(id)arg1;
- (id)maxAperture;
- (void)setMaxAperture:(id)arg1;
- (id)meteringMode;
- (void)setMeteringMode:(id)arg1;
- (id)isRedEyeOn;
- (void)setRedEyeOn:(id)arg1;
- (id)hasAlphaChannel;
- (void)setHasAlphaChannel:(id)arg1;
- (id)artist;
- (void)setArtist:(id)arg1;
- (id)album;
- (void)setAlbum:(id)arg1;
- (id)deliveryType;
- (void)setDeliveryType:(id)arg1;
- (id)audioBitRate;
- (void)setAudioBitRate:(id)arg1;
- (id)videoBitRate;
- (void)setVideoBitRate:(id)arg1;
- (id)totalBitRate;
- (void)setTotalBitRate:(id)arg1;
- (id)isStreamable;
- (void)setStreamable:(id)arg1;
- (id)mediaTypes;
- (void)setMediaTypes:(id)arg1;
- (id)codecs;
- (void)setCodecs:(id)arg1;
- (id)EXIFGPSVersion;
- (void)setEXIFGPSVersion:(id)arg1;
- (id)EXIFVersion;
- (void)setEXIFVersion:(id)arg1;
- (id)exposureTime;
- (void)setExposureTime:(id)arg1;
- (id)exposureMode;
- (void)setExposureMode:(id)arg1;
- (id)resolutionHeightDPI;
- (void)setResolutionHeightDPI:(id)arg1;
- (id)resolutionWidthDPI;
- (void)setResolutionWidthDPI:(id)arg1;
- (id)profileName;
- (void)setProfileName:(id)arg1;
- (id)aperture;
- (void)setAperture:(id)arg1;
- (id)whiteBalance;
- (void)setWhiteBalance:(id)arg1;
- (id)layerNames;
- (void)setLayerNames:(id)arg1;
- (id)orientation;
- (void)setOrientation:(id)arg1;
- (id)ISOSpeed;
- (void)setISOSpeed:(id)arg1;
- (id)lensModel;
- (void)setLensModel:(id)arg1;
- (id)cameraOwner;
- (void)setCameraOwner:(id)arg1;
- (id)acquisitionModel;
- (void)setAcquisitionModel:(id)arg1;
- (id)acquisitionMake;
- (void)setAcquisitionMake:(id)arg1;
- (id)isFocalLength35mm;
- (void)setFocalLength35mm:(id)arg1;
- (id)focalLength;
- (void)setFocalLength:(id)arg1;
- (id)isFlashOn;
- (void)setFlashOn:(id)arg1;
- (id)bitsPerSample;
- (void)setBitsPerSample:(id)arg1;
- (id)colorSpace;
- (void)setColorSpace:(id)arg1;
- (id)pixelCount;
- (void)setPixelCount:(id)arg1;
- (id)pixelWidth;
- (void)setPixelWidth:(id)arg1;
- (id)pixelHeight;
- (void)setPixelHeight:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)contactKeywords;
- (void)setContactKeywords:(id)arg1;
- (id)duration;
- (void)setDuration:(id)arg1;
- (id)addedDate;
- (void)setAddedDate:(id)arg1;
- (id)contentModificationDate;
- (void)setContentModificationDate:(id)arg1;
- (id)contentCreationDate;
- (void)setContentCreationDate:(id)arg1;
- (id)lastUsedDate;
- (void)setLastUsedDate:(id)arg1;
- (id)copyright;
- (void)setCopyright:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)contentSources;
- (void)setContentSources:(id)arg1;
- (id)downloadedDate;
- (void)setDownloadedDate:(id)arg1;
- (id)projects;
- (void)setProjects:(id)arg1;
- (id)recipientAddresses;
- (void)setRecipientAddresses:(id)arg1;
- (id)authorAddresses;
- (void)setAuthorAddresses:(id)arg1;
- (id)recipientEmailAddresses;
- (void)setRecipientEmailAddresses:(id)arg1;
- (id)authorEmailAddresses;
- (void)setAuthorEmailAddresses:(id)arg1;
- (id)participants;
- (void)setParticipants:(id)arg1;
- (id)editors;
- (void)setEditors:(id)arg1;
- (id)recipientNames;
- (void)setRecipientNames:(id)arg1;
- (id)authorNames;
- (void)setAuthorNames:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)keywords;
- (void)setKeywords:(id)arg1;
- (id)contentTypeTree;
- (void)setContentTypeTree:(id)arg1;
- (void)setContentType:(id)arg1;
- (id)metadataModificationDate;
- (void)setMetadataModificationDate:(id)arg1;
- (id)mailboxIdentifiers;
- (void)setMailboxIdentifiers:(id)arg1;
- (id)accountHandles;
- (void)setAccountHandles:(id)arg1;
- (id)accountIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (id)thumbnailData;
- (void)setThumbnailData:(id)arg1;
- (id)thumbnailURL;
- (void)setThumbnailURL:(id)arg1;
- (id)contentURL;
- (void)setContentURL:(id)arg1;
- (void)_updateDocumentInfoForContentURL:(id)arg1;
- (id)relatedUniqueIdentifier;
- (void)setRelatedUniqueIdentifier:(id)arg1;
- (id)emailHeaders;
- (void)setEmailHeaders:(id)arg1;
- (id)hiddenAdditionalRecipients;
- (void)setHiddenAdditionalRecipients:(id)arg1;
- (id)additionalRecipients;
- (void)setAdditionalRecipients:(id)arg1;
- (id)primaryRecipients;
- (void)setPrimaryRecipients:(id)arg1;
- (id)authors;
- (void)setAuthors:(id)arg1;
- (id)textContent;
- (void)setTextContent:(id)arg1;
- (id)HTMLContentData;
- (void)setHTMLContentData:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)alternateNames;
- (void)setAlternateNames:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
@property(copy) NSString *queryResultRelevance;
@property(copy) NSString *applicationName;
@property(copy) NSString *userActivityType;
@property(retain) NSDate *expirationDate;
@property(copy) NSString *protectionClass;
@property(copy) NSString *bundleID;
@property(copy) NSString *domainIdentifier;
@property(copy) NSString *uniqueIdentifier;
@property(readonly) NSArray *queryResultMatchedFields;
- (void)setQueryResultMatchedFields:(id)arg1;
@property(retain, getter=isPartiallyDownloaded) NSNumber *partiallyDownloaded;
@property(retain, getter=isExistingThread) NSNumber *existingThread;
@property(retain) NSNumber *documentIdentifier;
@property(copy) NSString *filename;
@property(retain) NSNumber *parentFileIdentifier;
@property(retain) NSNumber *fileIdentifier;
@property(retain) NSNumber *extendedContentRating;
@property(copy) NSString *adamID;
@property(copy) NSString *albumPersistentID;
@property(copy) NSArray *userTags;
@property(copy) NSString *subtitle;
@property(copy) NSString *textSelected;
@property(copy) NSString *accountType;
@property(copy) NSString *mailMessageID;
@property(copy) NSArray *mailGMailLabels;
@property(copy) NSNumber *mailPriority;
@property(copy) NSNumber *mailRepliedTo;
@property(copy) NSNumber *mailRead;
@property(copy) NSNumber *mailFlagColor;
@property(copy) NSNumber *mailFlagged;
@property(copy) NSDate *mailDateLastViewed;
@property(copy) NSDate *mailDateReceived;
@property(copy) NSArray *mailAttachmentKinds;
@property(copy) NSArray *mailAttachmentTypes;
@property(copy) NSArray *mailAttachmentNames;
- (id)containerOrder;
- (void)setContainerOrder:(id)arg1;
- (id)containerIdentifier;
- (void)setContainerIdentifier:(id)arg1;
- (id)containerDisplayName;
- (void)setContainerDisplayName:(id)arg1;
- (id)containerTitle;
- (void)setContainerTitle:(id)arg1;
- (id)allDay;
- (void)setAllDay:(id)arg1;
- (id)valueForCustomKey:(id)arg1;
- (void)setValue:(id)arg1 forCustomKey:(id)arg2;
- (void)encodeWithCSCoder:(id)arg1;
- (void)_stripContentURLAndEncodeWithCoder:(id)arg1;
- (void)encodeWithCSCoder:(id)arg1 includeText:(_Bool)arg2;

@end

