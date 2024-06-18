@interface PLSubmissionFileBDC : PLSubmissionFile

- (id)fileType;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (id)fileExtension;
- (id)getBDCPlistFile;
- (BOOL)copyAndPrepareLog;
- (id)getEPSQLFile;
- (id)getListOfRequiredBDCFiles;

@end
