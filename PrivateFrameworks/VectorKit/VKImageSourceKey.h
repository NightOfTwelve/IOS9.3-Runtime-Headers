//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface VKImageSourceKey : NSObject
{
    unsigned int _keyType;
    NSString *_imageName;
    NSString *_shieldText;
    NSString *_shieldTextLocale;
    unsigned int _shieldType;
    FixedPointVector_f041f768 _shieldColor;
    unsigned int _iconAttributeKey;
    unsigned int _iconAttributeValue;
    unsigned char _dataType;
    NSString *_text;
    NSString *_relatedText;
    _Bool _hasDataValue;
    unsigned int _dataValue;
    struct CGPoint _imageCenter;
}

@property(nonatomic) struct CGPoint imageCenter; // @synthesize imageCenter=_imageCenter;
@property(nonatomic) unsigned int dataValue; // @synthesize dataValue=_dataValue;
@property(readonly, nonatomic) _Bool hasDataValue; // @synthesize hasDataValue=_hasDataValue;
@property(retain, nonatomic) NSString *relatedText; // @synthesize relatedText=_relatedText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned char dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned int iconAttributeValue; // @synthesize iconAttributeValue=_iconAttributeValue;
@property(readonly, nonatomic) unsigned int iconAttributeKey; // @synthesize iconAttributeKey=_iconAttributeKey;
@property(readonly, nonatomic) unsigned int shieldType; // @synthesize shieldType=_shieldType;
@property(readonly, nonatomic) NSString *shieldTextLocale; // @synthesize shieldTextLocale=_shieldTextLocale;
@property(readonly, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) unsigned int keyType; // @synthesize keyType=_keyType;
- (id).cxx_construct;
- (void)dealloc;
@property(readonly, nonatomic) CDStruct_87ab733e shieldColor;
- (id)initWithLabelImageKey:(const shared_ptr_292eff10 *)arg1;
- (id)initWithIconName:(const char *)arg1;
- (id)initWithIconAttributeKey:(unsigned int)arg1 attributeValue:(unsigned int)arg2;
- (id)initWithShieldName:(const char *)arg1 text:(const char *)arg2 locale:(const char *)arg3 color:(FixedPointVector_f041f768)arg4;
- (id)initWithShieldText:(const char *)arg1 locale:(const char *)arg2 type:(unsigned int)arg3 color:(FixedPointVector_f041f768)arg4;
- (id)initWithDataType:(unsigned char)arg1;
- (id)_initWithKeyType:(unsigned int)arg1;

@end

