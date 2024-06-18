@class NSString, NSMutableString;

@interface ICSStringWriter : NSObject <ICSAppendable> {
    NSMutableString *_result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)mutableResult;
- (id)initWithString:(id)a0;
- (void)appendFormat:(id)a0;
- (id)result;
- (void).cxx_destruct;
- (void)appendString:(id)a0;

@end
