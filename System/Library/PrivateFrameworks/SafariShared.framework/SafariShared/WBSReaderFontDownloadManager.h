@class NSMutableDictionary;

@interface WBSReaderFontDownloadManager : NSObject {
    NSMutableDictionary *_fontFamilyToProgress;
}

+ (id)sharedManager;

- (id)init;
- (double)downloadProgressForFont:(id)a0;
- (BOOL)hasOngoingRequestForFont:(id)a0;
- (void).cxx_destruct;
- (void)downloadFont:(id)a0;

@end
