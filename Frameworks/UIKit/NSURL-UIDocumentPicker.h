//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (UIDocumentPicker)
+ (id)ui_incomingDirectory:(_Bool)arg1;
+ (id)ui_URLFromExportBookmark:(id)arg1;
+ (id)ui_cloudDocsContainerURL;
- (id)ui_resolveOnDiskBookmarkAndPromise;
- (void)ui_scheduleForCleanup;
- (id)ui_bookmarkForExportWithError:(id *)arg1;
- (_Bool)ui_isUnfulfilledPromiseURL;
- (_Bool)ui_canOpenInPlace;
- (void)ui_setIsFileProviderURL:(_Bool)arg1;
- (_Bool)ui_isFileProviderURL;
- (_Bool)ui_hasSandboxExtendedForClass:(const char *)arg1;
- (_Bool)ui_hasReadSandboxExtended;
- (id)ui_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;
- (id)ui_issueReadWriteSandboxExtensionWithError:(id *)arg1;
- (id)ui_issueReadSandboxExtensionWithError:(id *)arg1;
@end

