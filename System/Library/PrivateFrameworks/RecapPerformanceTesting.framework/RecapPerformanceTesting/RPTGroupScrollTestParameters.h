@class NSArray, NSString;

@interface RPTGroupScrollTestParameters : NSObject <RPTBlockBasedScrollTestParameters, RPTTestParameters>

@property (retain, nonatomic) NSArray *parameters;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *testName;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithTestName:(id)a0 parameters:(id)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)prepareWithComposer:(id)a0;
- (id /* block */)composerBlock;

@end
