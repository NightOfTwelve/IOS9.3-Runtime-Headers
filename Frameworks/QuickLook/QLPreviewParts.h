//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSError, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSThread, NSURL, NSURLConnection, NSURLRequest, NSURLResponse;

__attribute__((visibility("hidden")))
@interface QLPreviewParts : NSObject
{
    NSURL *_url;
    NSData *_data;
    NSString *_fileName;
    NSString *_uti;
    NSString *_password;
    _Bool _progressive;
    void *_convertFunction;
    NSURLConnection *_connection;
    id _delegate;
    long long _pageCount;
    float _pageWidth;
    float _pageHeight;
    NSURL *previewURL;
    NSURLResponse *previewResponse;
    NSMutableSet *registeredURLs;
    NSMutableSet *outstandingURLs;
    NSMutableDictionary *encodingsForURLs;
    NSThread *delegateCallbackThread;
    NSError *mainError;
    _Bool computed;
    _Bool cancelled;
    const void *representedObject;
    CDStruct_b3b3fc87 representedObjectCallbacks;
    long long representedObjectProtection;
    _Bool htmlErrorDisabled;
}

+ (id)relativeStringForSafeURL:(id)arg1;
+ (_Bool)isSafeRequest:(id)arg1;
+ (_Bool)isSafeURL:(id)arg1;
+ (id)safeURLScheme;
+ (void)unregisterPreview:(id)arg1;
+ (void)registerPreview:(id)arg1;
@property(readonly, nonatomic) NSURL *previewURL; // @synthesize previewURL;
@property _Bool htmlErrorDisabled; // @synthesize htmlErrorDisabled;
@property(readonly) float pageHeight; // @synthesize pageHeight=_pageHeight;
@property(readonly) float pageWidth; // @synthesize pageWidth=_pageWidth;
@property(readonly) long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool progressive; // @synthesize progressive=_progressive;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *uti; // @synthesize uti=_uti;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)mimeTypeForAttachmentURL:(id)arg1;
- (unsigned int)cfEncodingForAttachmentURL:(id)arg1;
@property(readonly, nonatomic) NSSet *attachmentURLs;
@property(readonly, nonatomic) NSURLResponse *previewResponse;
@property(readonly, nonatomic) NSURLRequest *previewRequest;
- (void)setError:(id)arg1;
- (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(_Bool)arg3;
- (id)newSafeAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (id)newAttachmentURLWithID:(id)arg1 properties:(id)arg2;
- (void)startDataRepresentationWithContentType:(id)arg1 properties:(id)arg2;
- (void)_registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (const void *)documentObject;
- (void)setDocumentObject:(const void *)arg1 callbacks:(const CDStruct_b3b3fc87 *)arg2;
- (void)_discardRepresentedObjectSafely;
- (void)_protectRepresentedObjectSafely;
@property(readonly, getter=isComputed) _Bool computed;
@property(readonly, getter=isCancelled) _Bool cancelled;
- (void)computePreviewInThread;
- (void)startComputingPreview;
- (id)safeRequestForRequest:(id)arg1;
- (id)_requestForURL:(id)arg1;
- (id)_voidRequest;
- (void)cancel;
- (void)computePreview;
- (void)dealloc;

@end

