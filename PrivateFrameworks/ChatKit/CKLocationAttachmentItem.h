//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKAttachmentItem.h>

@interface CKLocationAttachmentItem : CKAttachmentItem
{
    CDStruct_2c43369c _coordinate;
}

+ (id)UTITypes;
@property(nonatomic) CDStruct_2c43369c coordinate; // @synthesize coordinate=_coordinate;
- (_Bool)isDroppedPin;
- (id)pin;
- (id)vCardURLProperties;
- (id)_generateThumbnailFillToSize:(struct CGSize)arg1;
- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1 size:(struct CGSize)arg2 guid:(id)arg3;

@end

