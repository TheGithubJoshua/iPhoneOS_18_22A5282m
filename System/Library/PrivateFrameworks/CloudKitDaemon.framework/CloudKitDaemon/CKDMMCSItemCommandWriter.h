@class NSString, NSMutableIndexSet, CKDMMCSItemGroupContext, CKDMMCSItem;

@interface CKDMMCSItemCommandWriter : NSObject <CKDMMCSItemReaderWriterProtocol>

@property (retain, nonatomic) CKDMMCSItemGroupContext *MMCSRequest;
@property (retain, nonatomic) CKDMMCSItem *MMCSItem;
@property (retain, nonatomic) NSMutableIndexSet *byteRanges;
@property (nonatomic) unsigned long long maximumLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)openWithError:(id *)a0;
- (id)initWithMMCSItem:(id)a0 MMCSRequest:(id)a1;
- (BOOL)isContiguous;
- (BOOL)readBytesAtOffset:(unsigned long long)a0 bytes:(char *)a1 length:(unsigned long long)a2 bytesRead:(unsigned long long *)a3 error:(id *)a4;
- (void).cxx_destruct;
- (BOOL)closeWithError:(id *)a0;
- (void)dealloc;
- (id)getFileMetadataWithError:(id *)a0;
- (BOOL)writeBytesAtOffset:(unsigned long long)a0 bytes:(char *)a1 length:(unsigned long long)a2 bytesWritten:(unsigned long long *)a3 error:(id *)a4;

@end
