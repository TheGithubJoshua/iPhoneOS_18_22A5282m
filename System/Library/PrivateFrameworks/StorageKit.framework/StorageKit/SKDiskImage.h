@class NSURL;

@interface SKDiskImage : NSObject

@property (readonly, nonatomic) NSURL *imageURL;

- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)attachWithError:(id *)a0;
- (id)attachWithParams:(id)a0 error:(id *)a1;
- (id)deduceDiskFrom:(id)a0 error:(id *)a1;
- (id)diskImagesAttachWith:(id)a0 error:(id *)a1;
- (id)mount:(id)a0 params:(id)a1 outError:(id *)a2;

@end
