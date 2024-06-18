@interface PLSubmissionFileMSS : PLSubmissionFile

- (id)fileType;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (id)fileExtension;
- (BOOL)copyAndPrepareLog;
- (BOOL)flushMicrostackshots;
- (id)getFileList;

@end
