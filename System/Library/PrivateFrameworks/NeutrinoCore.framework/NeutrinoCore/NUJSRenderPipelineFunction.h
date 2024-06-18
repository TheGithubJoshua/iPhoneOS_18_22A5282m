@class NSDictionary, NSString;

@interface NUJSRenderPipelineFunction : NURenderPipelineFunction {
    NSDictionary *_params;
    NSString *_source;
}

- (id)evaluate:(id)a0 error:(out id *)a1;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithParameters:(id)a0 source:(id)a1;
- (BOOL)isEqualToFunction:(id)a0;

@end
