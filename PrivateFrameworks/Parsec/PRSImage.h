//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Parsec/NSSecureCoding-Protocol.h>

@class NSData, NSMutableArray, NSString, NSURL, UIImage;

@interface PRSImage : NSObject <NSSecureCoding>
{
    NSMutableArray *_completionBlocks;
    UIImage *_preloadedImage;
    _Bool _loaded;
    _Bool _isTemplate;
    float _cornerRadius;
    UIImage *_image;
    NSString *_identifier;
    NSString *_dataType;
    NSData *_data;
    NSURL *_url;
}

+ (_Bool)supportsSecureCoding;
+ (CDUnknownBlockType)converterBlock;
+ (void)setResourceDictionary:(id)arg1;
@property(retain) UIImage *preloadedImage; // @synthesize preloadedImage=_preloadedImage;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) NSString *dataType; // @synthesize dataType=_dataType;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property _Bool isTemplate; // @synthesize isTemplate=_isTemplate;
@property(retain) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)imageWithSource:(id)arg1 maxSize:(struct CGSize)arg2 scale:(double)arg3;
- (void)loadImageWithSprite:(id)arg1 map:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadImageWithSource:(id)arg1 maxSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)produceImageWithSource:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)preloadImageWithSource:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

