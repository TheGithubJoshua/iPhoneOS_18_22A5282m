@class NSUUID, NSArray, REDuetContextQuery;
@protocol _CDUserContext;

@interface _REContextRegistration : NSObject {
    BOOL _registered;
    NSArray *_registrations;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) REDuetContextQuery *query;
@property (retain, nonatomic) id<_CDUserContext> context;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;
- (id)initWithQuery:(id)a0;
- (void)dealloc;
- (void)_evaluateQueryWithRegistration:(BOOL)a0;
- (void)deregisterWithContext;
- (void)evaluateQuery;
- (void)registerWithContext;

@end
