@class NSURL, NSFileHandle;

@interface DTFileTransferRecord : NSObject

@property (retain, nonatomic) NSURL *destinationDirectoryURLToRemoveOnDealloc;
@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSFileHandle *writeHandle;
@property (readonly, nonatomic) BOOL isTransferOpen;

- (void).cxx_destruct;
- (void)dealloc;
- (void)closeFileTransfer;

@end
