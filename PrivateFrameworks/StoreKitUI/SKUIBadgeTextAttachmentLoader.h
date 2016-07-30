//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>

@class NSHashTable, NSMapTable, NSString, SKUIResourceLoader;

@interface SKUIBadgeTextAttachmentLoader : NSObject <SKUIArtworkRequestDelegate>
{
    NSMapTable *_imageRequests;
    SKUIResourceLoader *_resourceLoader;
    NSHashTable *_stringViews;
}

- (void).cxx_destruct;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (_Bool)loadImageForBadge:(id)arg1 layout:(id)arg2 reason:(long long)arg3;
- (void)disconnectStringView:(id)arg1;
- (void)connectStringView:(id)arg1;
- (id)initWithResourceLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

