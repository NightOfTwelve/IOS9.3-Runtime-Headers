//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKBalloonChatItem.h>

@class FMFLocation, IMHandle, NSString;

@interface CKLocationShareOfferChatItem : CKBalloonChatItem
{
    FMFLocation *_lastKnownLocation;
}

+ (id)placeholderPreviewCache;
+ (id)titleBarMaskImageForWidth:(double)arg1;
@property(retain, nonatomic) FMFLocation *lastKnownLocation; // @synthesize lastKnownLocation=_lastKnownLocation;
- (id)_desaturatedImageForImage:(id)arg1;
- (void)_handleLocationDidChangeNotification:(id)arg1;
- (id)savedPreviewFromURL:(id)arg1;
- (void)savePreview:(id)arg1 toURL:(id)arg2;
- (id)_generatePlaceholderThumbnailFillToSize:(struct CGSize)arg1;
- (id)_generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2 withCoordinate:(CDStruct_2c43369c)arg3 forState:(long long)arg4;
- (void)_generateMapPreview;
- (id)_previewCacheKey:(unsigned long long)arg1;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
@property(readonly, nonatomic) NSString *locationText;
@property(readonly, nonatomic) NSString *titleText;
@property(readonly, nonatomic) long long offerState;
- (void)configureBalloonView:(id)arg1;
@property(readonly, nonatomic) IMHandle *sender;
- (id)time;
- (_Bool)failed;
- (_Bool)isFromMe;
- (Class)balloonViewClass;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (void)dealloc;

@end

