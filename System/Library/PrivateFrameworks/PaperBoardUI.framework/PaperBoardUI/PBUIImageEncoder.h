@class NSURL, PBUIImageOnDiskFormat;

@interface PBUIImageEncoder : NSObject

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) PBUIImageOnDiskFormat *format;

- (id)writeThenReadBackImage:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 format:(id)a1;
- (id)saveUIImage:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)createUIImageWithError:(id *)a0;
- (id)saveImage:(struct CGImage { } *)a0 error:(id *)a1;

@end
