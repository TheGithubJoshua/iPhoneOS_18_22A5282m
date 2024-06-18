@interface AXPhoenixDataArchiver : NSObject

@property (nonatomic) struct archive { } *archiver;

- (void)addDirectoryToArchive:(id)a0 withDirName:(id)a1;
- (id)initWithPath:(id)a0;
- (void)addFileToArchive:(id)a0 withFileName:(id)a1;
- (void)closeArchive;

@end
