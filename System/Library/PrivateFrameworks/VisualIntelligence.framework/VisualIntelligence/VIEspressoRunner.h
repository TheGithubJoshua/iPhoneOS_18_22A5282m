@class NSString, NSArray, NSMutableData;

@interface VIEspressoRunner : NSObject {
    struct CGSize { double width; double height; } _expectedInputSize;
    NSString *_imageInputName;
    NSArray *_outputNames;
    void *_context;
    void *_plan;
    struct { void *plan; int network_index; } _net;
    NSMutableData *_outputBuffers;
}

@property (nonatomic) BOOL isImageRequired;

+ (id)formatErrorMessage:(id)a0 status:(int)a1;
+ (void)logErrorMessage:(id)a0 status:(int)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)setFrame:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)initWithMLNetURL:(id)a0 expectedInputSize:(struct CGSize { double x0; double x1; })a1 imageInputName:(id)a2 featureNames:(id)a3 outputNames:(id)a4 preferredMetalDevice:(id)a5 usesCPUOnly:(BOOL)a6;
- (id)processWithError:(id *)a0;
- (void)set:(id)a0 error:(id *)a1;
- (BOOL)setFeatures:(id)a0 error:(id *)a1;

@end
