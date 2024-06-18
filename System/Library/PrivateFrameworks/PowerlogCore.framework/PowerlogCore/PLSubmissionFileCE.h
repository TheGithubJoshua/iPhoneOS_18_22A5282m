@interface PLSubmissionFileCE : PLSubmissionFile

- (id)fileType;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (id)fileExtension;
- (BOOL)copyAndPrepareLog;
- (id)getCESQLFile;

@end
