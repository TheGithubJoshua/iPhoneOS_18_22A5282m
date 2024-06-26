@class NSURL, NSURLResponse, NSDate, SFQuickLookDocument, _WKDownload, NSDictionary, WBSFluidProgressController, SFDownloadFile, WBSFluidProgressState, NSString, NSURLRequest, NSTimer, WKWebView, _WKUserInitiatedAction, NSData, NSUUID;
@protocol _SFDownloadPlaceholderImporter, _SFDownloadDelegate;

@interface _SFDownload : NSObject <SFDownloadFileDelegate, _WKDownloadDelegate, WBSFluidProgressStateSource> {
    _WKDownload *_download;
    BOOL _wasCanceled;
    WBSFluidProgressState *_fluidProgressState;
    double _timeLastProgressNotificationWasSent;
    long long _cachedFileType;
    NSTimer *_reportUpdatedProgressTimer;
    WKWebView *_originatingWebView;
    NSData *_resumeData;
    SFDownloadFile *_placeholderFile;
    SFDownloadFile *_completedFile;
    NSString *_suggestedFilename;
    NSURLRequest *_request;
}

@property (retain, nonatomic) SFQuickLookDocument *quickLookDocument;
@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSString *fileDownloadPath;
@property (readonly, nonatomic) long long fileType;
@property (readonly, nonatomic) _WKUserInitiatedAction *userInitiatedAction;
@property (readonly, copy, nonatomic) NSString *uti;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) NSURLResponse *response;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) _WKDownload *wkDownload;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *filenameWithoutExtension;
@property (readonly, nonatomic) NSURL *completedFileURL;
@property (readonly, nonatomic) long long dataOwner;
@property (nonatomic) BOOL explicitlySaved;
@property (nonatomic) BOOL suppressesPrompt;
@property (readonly, nonatomic) long long bytesExpected;
@property (readonly, nonatomic) unsigned long long bytesLoaded;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic, getter=isIdle) BOOL idle;
@property (readonly, nonatomic) NSDate *dateAdded;
@property (readonly, nonatomic) NSDate *dateFinished;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) BOOL canResume;
@property (readonly, nonatomic) BOOL canReveal;
@property (weak, nonatomic) WBSFluidProgressController *fluidProgressController;
@property (weak, nonatomic) id<_SFDownloadDelegate> delegate;
@property (weak, nonatomic) id<_SFDownloadPlaceholderImporter> placeholderImporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloadDestinationPathWithFilename:(id)a0;
+ (id)provisionalDownloadWithMIMEType:(id)a0 request:(id)a1 response:(id)a2 filename:(id)a3 uti:(id)a4 userInitiatedAction:(id)a5;

- (double)estimatedProgress;
- (id)init;
- (BOOL)hasFailedURL;
- (void)cancel;
- (void).cxx_destruct;
- (void)clearFluidProgressState;
- (void)dealloc;
- (BOOL)createFluidProgressState;
- (id)expectedOrCurrentURL;
- (id)progressState;
- (BOOL)removeFromDisk;
- (void)_download:(id)a0 decideDestinationWithSuggestedFilename:(id)a1 completionHandler:(id /* block */)a2;
- (void)_download:(id)a0 didFailWithError:(id)a1;
- (void)_download:(id)a0 didReceiveResponse:(id)a1;
- (void)_download:(id)a0 didWriteData:(unsigned long long)a1 totalBytesWritten:(unsigned long long)a2 totalBytesExpectedToWrite:(unsigned long long)a3;
- (void)_downloadDidCancel:(id)a0;
- (void)_downloadDidFinish:(id)a0;
- (void)_downloadDidStart:(id)a0;
- (void)_downloadProcessDidCrash:(id)a0;
- (void)_importCompleteDownloadIfNeeded;
- (void)_cancelReportUpdatedProgressTimer;
- (void)_continueAfterDecidingFileDownloadPath:(id /* block */)a0;
- (void)_continueAfterDownloadConfirmation:(BOOL)a0 destinationCompletionHandler:(id /* block */)a1;
- (id)_createResumeData;
- (void)_didImportFileAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_didImportPlaceholderAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_didUpdateBytesLoaded;
- (void)_importPlaceholderIfNeeded:(id /* block */)a0;
- (void)_notifyDelegateOfFinishedDownload;
- (void)_reportUpdatedProgressNow;
- (void)_reportUpdatedProgressSoon;
- (void)_reportUpdatedProgressTimerFired:(id)a0;
- (void)_validateSandboxAccessToURL:(id)a0;
- (id)completedFileURL:(BOOL *)a0;
- (void)downloadFileContentsDidChange:(id)a0;
- (void)downloadFileDidChangeURL:(id)a0;
- (void)downloadFileWillBeDeleted:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 didUpdateRepresentation:(BOOL *)a1;
- (void)removeDataAndPlaceholderFromDisk;
- (void)resumeInProcessPool:(id)a0;
- (void)reveal;

@end
