//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMHTMLElement.h>

@class DOMDocument, DOMHTMLFormElement, NSString, NSURL;

@interface DOMHTMLObjectElement : DOMHTMLElement
{
}

- (void)setCustomValidity:(id)arg1;
- (_Bool)checkValidity;
@property(readonly, copy) NSURL *absoluteImageURL;
@property(readonly) DOMDocument *contentDocument;
- (id)validationMessage;
- (id)validity;
- (_Bool)willValidate;
@property(copy) NSString *width;
@property int vspace;
@property(copy) NSString *useMap;
@property(copy) NSString *type;
@property(copy) NSString *standby;
@property(copy) NSString *name;
@property int hspace;
@property(copy) NSString *height;
@property _Bool declare;
@property(copy) NSString *data;
@property(copy) NSString *codeType;
@property(copy) NSString *codeBase;
@property(copy) NSString *border;
@property(copy) NSString *archive;
@property(copy) NSString *align;
@property(copy) NSString *code;
@property(readonly) DOMHTMLFormElement *form;

@end

