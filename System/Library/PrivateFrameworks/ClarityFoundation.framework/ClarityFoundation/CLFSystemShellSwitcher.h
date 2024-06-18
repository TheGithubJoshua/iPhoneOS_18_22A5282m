@interface CLFSystemShellSwitcher : NSObject

@property (nonatomic, getter=isClarityBoardEnabled) BOOL clarityBoardEnabled;

- (BOOL)setClarityBoardEnabled:(BOOL)a0 error:(id *)a1;
- (id)_directoryURL;
- (BOOL)_removeFileWithError:(id *)a0;
- (BOOL)_createFileWithError:(id *)a0;

@end
