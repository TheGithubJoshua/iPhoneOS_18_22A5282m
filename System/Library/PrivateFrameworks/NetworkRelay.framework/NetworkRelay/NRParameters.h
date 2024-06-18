@class NSObject;
@protocol OS_nw_parameters;

@interface NRParameters : NSObject {
    NSObject<OS_nw_parameters> *_parameters;
}

@property (nonatomic) unsigned char serviceClass;

- (id)init;
- (id)copyParameters;
- (id)initWithParameters:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
