#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KottageKotlinCancellationException, KottageKotlinThrowable, KottageJobSupport, KottageCoroutineStart, KottageCoroutineDispatcher, KottageKotlinAbstractCoroutineContextElement, KottageCoroutineDispatcherKey, KottageKotlinArray<T>, KottageKotlinException, KottageKotlinRuntimeException, KottageKotlinAbstractCoroutineContextKey<B, E>, KottageCoroutineExceptionHandlerKey, KottageCoroutineNameKey, KottageCoroutineName, KottageKotlinEnumCompanion, KottageKotlinEnum<E>, KottageDispatchers, KottageMainCoroutineDispatcher, KottageGlobalScope, KottageJobKey, KottageNonCancellable, KottageNonDisposableHandle, KottageKotlinIllegalStateException, KottageTimeoutCancellationException, KottageBufferOverflow, KottageChannelFactory, KottageKotlinNoSuchElementException, KottageSharingCommand, KottageSharingStartedCompanion, KottageChannelFlow<T>, KottageAtomicDesc, KottageLockFreeLinkedListNodePrepareOp, KottageAtomicOp<__contravariant T>, KottageOpDescriptor, KottageLockFreeLinkedListNode, KottageLockFreeLinkedListNodeAddLastDesc<T>, KottageLockFreeLinkedListNodeRemoveFirstDesc<T>, KottageLockFreeLinkedListNodeAbstractAtomicDesc, KottageAtomicfuSynchronizedObjectLockState, KottageKotlinAtomicReference<T>, KottageAtomicfuSynchronizedObject, KottageThreadSafeHeap<T>, KottageDecodeSequenceMode, KottageKotlinx_serialization_coreSerializersModule, KottageJsonDefault, KottageJsonElement, KottageJsonConfiguration, KottageJson, KottageKotlinNothing, KottageJsonElementCompanion, KottageJsonPrimitiveCompanion, KottageJsonPrimitive, KottageJsonNull, KottageKottageEnvironment, KottageKottageOptionsBuilder, KottageKottageCompanion, KottageKottageStorageOptionsBuilder, KottageKottageEventFlow, KottageKottageOptions, KottageKottageDatabaseFiles, KottageKottageEntry<T>, KottageKottageContext, KottageKottageEventType, KottageKottageEventCompanion, KottageKottageEvent, KottageKottageEventTypeCompanion, KottageKottageListMetaData, KottageKottageListEntry, KottageKottageListValue<T>, KottageKottageListDirection, KottageKottageListPage, KottageKottageListOptions, KottageKottageListEntryCompanion, KottageKottageListOptionsBuilder, KottageKottageStorageOptions, KottageCoreContext, KottageKotlinByteArray, KottageKotlinIntIterator, KottageKotlinIntArray, KottageKotlinLongIterator, KottageKotlinLongArray, KottageKotlinIntProgressionCompanion, KottageKotlinIntProgression, KottageKotlinIntRangeCompanion, KottageKotlinIntRange, KottageKotlinLongProgressionCompanion, KottageKotlinLongProgression, KottageKotlinLongRangeCompanion, KottageKotlinLongRange, KottageJsonArrayBuilder, KottageJsonObjectBuilder, KottageCloseableCoroutineDispatcher, KottageJsonBuilder, KottageAtomicfuSynchronizedObjectStatus, KottageKotlinx_serialization_coreSerialKind, KottageKotlinIllegalArgumentException, KottageKotlinKTypeProjection, KottageKotlinByteIterator, KottageKotlinKVariance, KottageKotlinKTypeProjectionCompanion;

@protocol KottageChildHandle, KottageChildJob, KottageDisposableHandle, KottageJob, KottageKotlinSequence, KottageSelectClause0, KottageKotlinCoroutineContextKey, KottageKotlinCoroutineContextElement, KottageKotlinCoroutineContext, KottageParentJob, KottageSelectInstance, KottageKotlinSuspendFunction0, KottageKotlinContinuation, KottageCoroutineScope, KottageKotlinSuspendFunction1, KottageKotlinContinuationInterceptor, KottageRunnable, KottageSelectClause1, KottageDeferred, KottageKotlinComparable, KottageCancellableContinuation, KottageCopyableThrowable, KottageReceiveChannel, KottageSelectClause2, KottageSendChannel, KottageChannelIterator, KottageBroadcastChannel, KottageFlowCollector, KottageFlow, KottageStateFlow, KottageSharedFlow, KottageMutableSharedFlow, KottageSharingStarted, KottageFusibleFlow, KottageProducerScope, KottageMainDispatcherFactory, KottageKotlinx_serialization_coreDeserializationStrategy, KottageKotlinx_serialization_coreSerializationStrategy, KottageKotlinx_serialization_coreSerialFormat, KottageKotlinx_serialization_coreStringFormat, KottageKotlinx_serialization_coreEncoder, KottageKotlinx_serialization_coreSerialDescriptor, KottageKotlinx_serialization_coreDecoder, KottageKotlinx_serialization_coreKSerializer, KottageKotlinKClass, KottageKotlinx_serialization_coreCompositeDecoder, KottageKotlinx_serialization_coreCompositeEncoder, KottageKottageStorage, KottageKotlinKType, KottageKottageCalendar, KottageKottageList, KottageKotlinReadOnlyProperty, KottageKottageStrategy, KottageKottageEncoder, KottageKottageStrategyOperator, KottageKotlinIterator, KottageKotlinIterable, KottageKotlinClosedRange, KottageCompletableJob, KottageCompletableDeferred, KottageCoroutineExceptionHandler, KottageChannel, KottageKotlinSuspendFunction2, KottageKotlinSuspendFunction3, KottageMutableStateFlow, KottageKotlinSuspendFunction5, KottageKotlinSuspendFunction4, KottageKotlinSuspendFunction6, KottageSelectBuilder, KottageMutex, KottageSemaphore, KottageKotlinFunction, KottageKotlinx_serialization_coreSerializersModuleCollector, KottageKotlinAnnotation, KottageKotlinKDeclarationContainer, KottageKotlinKAnnotatedElement, KottageKotlinKClassifier, KottageKotlinKProperty, KottageKotlinKCallable;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KottageBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KottageBase (KottageBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface KottageMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KottageMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKottageKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface KottageNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface KottageByte : KottageNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface KottageUByte : KottageNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface KottageShort : KottageNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface KottageUShort : KottageNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface KottageInt : KottageNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface KottageUInt : KottageNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface KottageLong : KottageNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface KottageULong : KottageNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface KottageFloat : KottageNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface KottageDouble : KottageNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface KottageBoolean : KottageNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol KottageKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<KottageKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<KottageKotlinCoroutineContextElement> _Nullable)getKey:(id<KottageKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<KottageKotlinCoroutineContext>)minusKeyKey:(id<KottageKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<KottageKotlinCoroutineContext>)plusContext:(id<KottageKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol KottageKotlinCoroutineContextElement <KottageKotlinCoroutineContext>
@required
@property (readonly) id<KottageKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Job")))
@protocol KottageJob <KottageKotlinCoroutineContextElement>
@required
- (id<KottageChildHandle>)attachChildChild:(id<KottageChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(KottageKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (KottageKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<KottageDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(KottageKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<KottageDisposableHandle>)invokeOnCompletionHandler:(void (^)(KottageKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<KottageJob>)plusOther:(id<KottageJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<KottageKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<KottageSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("ChildJob")))
@protocol KottageChildJob <KottageJob>
@required
- (void)parentCancelledParentJob:(id<KottageParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("ParentJob")))
@protocol KottageParentJob <KottageJob>
@required
- (KottageKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("SelectClause0")))
@protocol KottageSelectClause0
@required
- (void)registerSelectClause0Select:(id<KottageSelectInstance>)select block:(id<KottageKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("JobSupport")))
@interface KottageJobSupport : KottageBase <KottageJob, KottageChildJob, KottageParentJob, KottageSelectClause0>
- (instancetype)initWithActive:(BOOL)active __attribute__((swift_name("init(active:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("This is internal API and may be removed in the future releases")));
- (void)afterCompletionState:(id _Nullable)state __attribute__((swift_name("afterCompletion(state:)")));
- (id<KottageChildHandle>)attachChildChild:(id<KottageChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(KottageKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)cancelCoroutineCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancelCoroutine(cause:)")));
- (void)cancelInternalCause:(KottageKotlinThrowable *)cause __attribute__((swift_name("cancelInternal(cause:)")));
- (NSString *)cancellationExceptionMessage __attribute__((swift_name("cancellationExceptionMessage()")));
- (BOOL)childCancelledCause:(KottageKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
- (KottageKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (KottageKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
- (KottageKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
- (BOOL)handleJobExceptionException:(KottageKotlinThrowable *)exception __attribute__((swift_name("handleJobException(exception:)")));
- (void)doInitParentJobParent:(id<KottageJob> _Nullable)parent __attribute__((swift_name("doInitParentJob(parent:)")));
- (id<KottageDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(KottageKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<KottageDisposableHandle>)invokeOnCompletionHandler:(void (^)(KottageKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (void)onCancellingCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("onCancelling(cause:)")));
- (void)onCompletionInternalState:(id _Nullable)state __attribute__((swift_name("onCompletionInternal(state:)")));
- (void)onStart __attribute__((swift_name("onStart()")));
- (void)parentCancelledParentJob:(id<KottageParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
- (void)registerSelectClause0Select:(id<KottageSelectInstance>)select block:(id<KottageKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
- (BOOL)start __attribute__((swift_name("start()")));
- (NSString *)toDebugString __attribute__((swift_name("toDebugString()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (KottageKotlinCancellationException *)toCancellationException:(KottageKotlinThrowable *)receiver message:(NSString * _Nullable)message __attribute__((swift_name("toCancellationException(_:message:)")));
@property (readonly) id<KottageKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) KottageKotlinThrowable * _Nullable completionCause __attribute__((swift_name("completionCause")));
@property (readonly) BOOL completionCauseHandled __attribute__((swift_name("completionCauseHandled")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) BOOL isCompletedExceptionally __attribute__((swift_name("isCompletedExceptionally")));
@property (readonly) BOOL isScopedCoroutine __attribute__((swift_name("isScopedCoroutine")));
@property (readonly) id<KottageKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@property (readonly) id<KottageSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol KottageKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<KottageKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("CoroutineScope")))
@protocol KottageCoroutineScope
@required
@property (readonly) id<KottageKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("AbstractCoroutine")))
@interface KottageAbstractCoroutine<__contravariant T> : KottageJobSupport <KottageJob, KottageKotlinContinuation, KottageCoroutineScope>
- (instancetype)initWithParentContext:(id<KottageKotlinCoroutineContext>)parentContext initParentJob:(BOOL)initParentJob active:(BOOL)active __attribute__((swift_name("init(parentContext:initParentJob:active:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithActive:(BOOL)active __attribute__((swift_name("init(active:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)afterResumeState:(id _Nullable)state __attribute__((swift_name("afterResume(state:)")));
- (NSString *)cancellationExceptionMessage __attribute__((swift_name("cancellationExceptionMessage()")));
- (void)onCancelledCause:(KottageKotlinThrowable *)cause handled:(BOOL)handled __attribute__((swift_name("onCancelled(cause:handled:)")));
- (void)onCompletedValue:(T _Nullable)value __attribute__((swift_name("onCompleted(value:)")));
- (void)onCompletionInternalState:(id _Nullable)state __attribute__((swift_name("onCompletionInternal(state:)")));
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
- (void)startStart:(KottageCoroutineStart *)start receiver:(id _Nullable)receiver block:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("start(start:receiver:block:)")));
@property (readonly) id<KottageKotlinCoroutineContext> context __attribute__((swift_name("context")));
@property (readonly) id<KottageKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@end;

__attribute__((swift_name("CancellableContinuation")))
@protocol KottageCancellableContinuation <KottageKotlinContinuation>
@required
- (BOOL)cancelCause_:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
- (void)completeResumeToken:(id)token __attribute__((swift_name("completeResume(token:)")));
- (void)doInitCancellability __attribute__((swift_name("doInitCancellability()")));
- (void)invokeOnCancellationHandler:(void (^)(KottageKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCancellation(handler:)")));
- (void)resumeValue:(id _Nullable)value onCancellation:(void (^ _Nullable)(KottageKotlinThrowable *))onCancellation __attribute__((swift_name("resume(value:onCancellation:)")));
- (id _Nullable)tryResumeValue:(id _Nullable)value idempotent:(id _Nullable)idempotent __attribute__((swift_name("tryResume(value:idempotent:)")));
- (id _Nullable)tryResumeValue:(id _Nullable)value idempotent:(id _Nullable)idempotent onCancellation:(void (^ _Nullable)(KottageKotlinThrowable *))onCancellation __attribute__((swift_name("tryResume(value:idempotent:onCancellation:)")));
- (id _Nullable)tryResumeWithExceptionException:(KottageKotlinThrowable *)exception __attribute__((swift_name("tryResumeWithException(exception:)")));
- (void)resumeUndispatched:(KottageCoroutineDispatcher *)receiver value:(id _Nullable)value __attribute__((swift_name("resumeUndispatched(_:value:)")));
- (void)resumeUndispatchedWithException:(KottageCoroutineDispatcher *)receiver exception:(KottageKotlinThrowable *)exception __attribute__((swift_name("resumeUndispatchedWithException(_:exception:)")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@end;

__attribute__((swift_name("DisposableHandle")))
@protocol KottageDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("ChildHandle")))
@protocol KottageChildHandle <KottageDisposableHandle>
@required
- (BOOL)childCancelledCause:(KottageKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<KottageJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface KottageKotlinAbstractCoroutineContextElement : KottageBase <KottageKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<KottageKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<KottageKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol KottageKotlinContinuationInterceptor <KottageKotlinCoroutineContextElement>
@required
- (id<KottageKotlinContinuation>)interceptContinuationContinuation:(id<KottageKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<KottageKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("CoroutineDispatcher")))
@interface KottageCoroutineDispatcher : KottageKotlinAbstractCoroutineContextElement <KottageKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<KottageKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KottageCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<KottageKotlinCoroutineContext>)context block:(id<KottageRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<KottageKotlinCoroutineContext>)context block:(id<KottageRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<KottageKotlinContinuation>)interceptContinuationContinuation:(id<KottageKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<KottageKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (KottageCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (KottageCoroutineDispatcher *)plusOther_:(KottageCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<KottageKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("CloseableCoroutineDispatcher")))
@interface KottageCloseableCoroutineDispatcher : KottageCoroutineDispatcher
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Deferred")))
@protocol KottageDeferred <KottageJob>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));
- (id _Nullable)getCompleted __attribute__((swift_name("getCompleted()")));
- (KottageKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
@property (readonly) id<KottageSelectClause1> onAwait __attribute__((swift_name("onAwait")));
@end;

__attribute__((swift_name("CompletableDeferred")))
@protocol KottageCompletableDeferred <KottageDeferred>
@required
- (BOOL)completeValue:(id _Nullable)value __attribute__((swift_name("complete(value:)")));
- (BOOL)completeExceptionallyException:(KottageKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
@end;

__attribute__((swift_name("CompletableJob")))
@protocol KottageCompletableJob <KottageJob>
@required
- (BOOL)complete __attribute__((swift_name("complete()")));
- (BOOL)completeExceptionallyException:(KottageKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface KottageKotlinThrowable : KottageBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (KottageKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KottageKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface KottageKotlinException : KottageKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface KottageKotlinRuntimeException : KottageKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompletionHandlerException")))
@interface KottageCompletionHandlerException : KottageKotlinRuntimeException
- (instancetype)initWithMessage:(NSString *)message cause:(KottageKotlinThrowable *)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("CopyableThrowable")))
@protocol KottageCopyableThrowable
@required
- (KottageKotlinThrowable * _Nullable)createCopy __attribute__((swift_name("createCopy()")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol KottageKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface KottageKotlinAbstractCoroutineContextKey<B, E> : KottageBase <KottageKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<KottageKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<KottageKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineDispatcher.Key")))
@interface KottageCoroutineDispatcherKey : KottageKotlinAbstractCoroutineContextKey<id<KottageKotlinContinuationInterceptor>, KottageCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<KottageKotlinCoroutineContextKey>)baseKey safeCast:(id<KottageKotlinCoroutineContextElement> _Nullable (^)(id<KottageKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("CoroutineExceptionHandler")))
@protocol KottageCoroutineExceptionHandler <KottageKotlinCoroutineContextElement>
@required
- (void)handleExceptionContext:(id<KottageKotlinCoroutineContext>)context exception:(KottageKotlinThrowable *)exception __attribute__((swift_name("handleException(context:exception:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineExceptionHandlerKey")))
@interface KottageCoroutineExceptionHandlerKey : KottageBase <KottageKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageCoroutineExceptionHandlerKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineName")))
@interface KottageCoroutineName : KottageKotlinAbstractCoroutineContextElement
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithKey:(id<KottageKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KottageCoroutineNameKey *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageCoroutineName *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineName.Key")))
@interface KottageCoroutineNameKey : KottageBase <KottageKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageCoroutineNameKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol KottageKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface KottageKotlinEnum<E> : KottageBase <KottageKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KottageKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineStart")))
@interface KottageCoroutineStart : KottageKotlinEnum<KottageCoroutineStart *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KottageCoroutineStart *default_ __attribute__((swift_name("default_")));
@property (class, readonly) KottageCoroutineStart *lazy __attribute__((swift_name("lazy")));
@property (class, readonly) KottageCoroutineStart *atomic __attribute__((swift_name("atomic")));
@property (class, readonly) KottageCoroutineStart *undispatched __attribute__((swift_name("undispatched")));
+ (KottageKotlinArray<KottageCoroutineStart *> *)values __attribute__((swift_name("values()")));
- (void)invokeBlock:(id<KottageKotlinSuspendFunction0>)block completion:(id<KottageKotlinContinuation>)completion __attribute__((swift_name("invoke(block:completion:)")));
- (void)invokeBlock:(id<KottageKotlinSuspendFunction1>)block receiver:(id _Nullable)receiver completion:(id<KottageKotlinContinuation>)completion __attribute__((swift_name("invoke(block:receiver:completion:)")));
@property (readonly) BOOL isLazy __attribute__((swift_name("isLazy")));
@end;

__attribute__((swift_name("Delay")))
@protocol KottageDelay
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)delayTime:(int64_t)time completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delay(time:completionHandler:)"))) __attribute__((unavailable("Deprecated without replacement as an internal method never intended for public use")));
- (id<KottageDisposableHandle>)invokeOnTimeoutTimeMillis:(int64_t)timeMillis block:(id<KottageRunnable>)block context:(id<KottageKotlinCoroutineContext>)context __attribute__((swift_name("invokeOnTimeout(timeMillis:block:context:)")));
- (void)scheduleResumeAfterDelayTimeMillis:(int64_t)timeMillis continuation:(id<KottageCancellableContinuation>)continuation __attribute__((swift_name("scheduleResumeAfterDelay(timeMillis:continuation:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dispatchers")))
@interface KottageDispatchers : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dispatchers __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageDispatchers *shared __attribute__((swift_name("shared")));
@property (readonly) KottageCoroutineDispatcher *Default __attribute__((swift_name("Default")));
@property (readonly) KottageMainCoroutineDispatcher *Main __attribute__((swift_name("Main")));
@property (readonly) KottageCoroutineDispatcher *Unconfined __attribute__((swift_name("Unconfined")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GlobalScope")))
@interface KottageGlobalScope : KottageBase <KottageCoroutineScope>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)globalScope __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageGlobalScope *shared __attribute__((swift_name("shared")));
@property (readonly) id<KottageKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobKey")))
@interface KottageJobKey : KottageBase <KottageKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageJobKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("MainCoroutineDispatcher")))
@interface KottageMainCoroutineDispatcher : KottageCoroutineDispatcher
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KottageCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString * _Nullable)toStringInternalImpl __attribute__((swift_name("toStringInternalImpl()")));
@property (readonly) KottageMainCoroutineDispatcher *immediate __attribute__((swift_name("immediate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NonCancellable")))
@interface KottageNonCancellable : KottageKotlinAbstractCoroutineContextElement <KottageJob>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithKey:(id<KottageKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)nonCancellable __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageNonCancellable *shared __attribute__((swift_name("shared")));
- (id<KottageChildHandle>)attachChildChild:(id<KottageChildJob>)child __attribute__((swift_name("attachChild(child:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (void)cancelCause:(KottageKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (KottageKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (id<KottageDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(KottageKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (id<KottageDisposableHandle>)invokeOnCompletionHandler:(void (^)(KottageKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (BOOL)start __attribute__((swift_name("start()"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KottageKotlinSequence> children __attribute__((swift_name("children"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) id<KottageSelectClause0> onJoin __attribute__((swift_name("onJoin"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NonDisposableHandle")))
@interface KottageNonDisposableHandle : KottageBase <KottageDisposableHandle, KottageChildHandle>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nonDisposableHandle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageNonDisposableHandle *shared __attribute__((swift_name("shared")));
- (BOOL)childCancelledCause:(KottageKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KottageJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Runnable")))
@protocol KottageRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KottageKotlinIllegalStateException : KottageKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface KottageKotlinCancellationException : KottageKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeoutCancellationException")))
@interface KottageTimeoutCancellationException : KottageKotlinCancellationException <KottageCopyableThrowable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KottageTimeoutCancellationException *)createCopy __attribute__((swift_name("createCopy()")));
@end;

__attribute__((swift_name("SendChannel")))
@protocol KottageSendChannel
@required
- (BOOL)closeCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)invokeOnCloseHandler:(void (^)(KottageKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnClose(handler:)")));
- (BOOL)offerElement:(id _Nullable)element __attribute__((swift_name("offer(element:)"))) __attribute__((unavailable("Deprecated in the favour of 'trySend' method")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(id _Nullable)element completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
- (id _Nullable)trySendElement:(id _Nullable)element __attribute__((swift_name("trySend(element:)")));
@property (readonly) BOOL isClosedForSend __attribute__((swift_name("isClosedForSend")));
@property (readonly) id<KottageSelectClause2> onSend __attribute__((swift_name("onSend")));
@end;

__attribute__((swift_name("BroadcastChannel")))
@protocol KottageBroadcastChannel <KottageSendChannel>
@required
- (void)cancelCause:(KottageKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<KottageReceiveChannel>)openSubscription __attribute__((swift_name("openSubscription()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BufferOverflow")))
@interface KottageBufferOverflow : KottageKotlinEnum<KottageBufferOverflow *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KottageBufferOverflow *suspend __attribute__((swift_name("suspend")));
@property (class, readonly) KottageBufferOverflow *dropOldest __attribute__((swift_name("dropOldest")));
@property (class, readonly) KottageBufferOverflow *dropLatest __attribute__((swift_name("dropLatest")));
+ (KottageKotlinArray<KottageBufferOverflow *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("ReceiveChannel")))
@protocol KottageReceiveChannel
@required
- (void)cancelCause:(KottageKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<KottageChannelIterator>)iterator __attribute__((swift_name("iterator()")));
- (id _Nullable)poll __attribute__((swift_name("poll()"))) __attribute__((unavailable("Deprecated in the favour of 'tryReceive'. Please note that the provided replacement does not rethrow channel's close cause as 'poll' did, for the precise replacement please refer to the 'poll' documentation")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveCatchingWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveCatching(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveOrNullWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveOrNull(completionHandler:)"))) __attribute__((unavailable("Deprecated in favor of 'receiveCatching'. Please note that the provided replacement does not rethrow channel's close cause as 'receiveOrNull' did, for the detailed replacement please refer to the 'receiveOrNull' documentation")));
- (id _Nullable)tryReceive __attribute__((swift_name("tryReceive()")));
@property (readonly) BOOL isClosedForReceive __attribute__((swift_name("isClosedForReceive")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) id<KottageSelectClause1> onReceive __attribute__((swift_name("onReceive")));
@property (readonly) id<KottageSelectClause1> onReceiveCatching __attribute__((swift_name("onReceiveCatching")));
@property (readonly) id<KottageSelectClause1> onReceiveOrNull __attribute__((swift_name("onReceiveOrNull"))) __attribute__((unavailable("Deprecated in favor of onReceiveCatching extension")));
@end;

__attribute__((swift_name("Channel")))
@protocol KottageChannel <KottageSendChannel, KottageReceiveChannel>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelFactory")))
@interface KottageChannelFactory : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)factory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageChannelFactory *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t BUFFERED __attribute__((swift_name("BUFFERED")));
@property (readonly) int32_t CONFLATED __attribute__((swift_name("CONFLATED")));
@property (readonly) NSString *DEFAULT_BUFFER_PROPERTY_NAME __attribute__((swift_name("DEFAULT_BUFFER_PROPERTY_NAME")));
@property (readonly) int32_t RENDEZVOUS __attribute__((swift_name("RENDEZVOUS")));
@property (readonly) int32_t UNLIMITED __attribute__((swift_name("UNLIMITED")));
@end;

__attribute__((swift_name("ChannelIterator")))
@protocol KottageChannelIterator
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(KottageBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinNoSuchElementException")))
@interface KottageKotlinNoSuchElementException : KottageKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClosedReceiveChannelException")))
@interface KottageClosedReceiveChannelException : KottageKotlinNoSuchElementException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClosedSendChannelException")))
@interface KottageClosedSendChannelException : KottageKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConflatedBroadcastChannel")))
@interface KottageConflatedBroadcastChannel<E> : KottageBase <KottageBroadcastChannel>
- (instancetype)initWithValue:(E _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancelCause:(KottageKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)closeCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)invokeOnCloseHandler:(void (^)(KottageKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnClose(handler:)")));
- (id<KottageReceiveChannel>)openSubscription __attribute__((swift_name("openSubscription()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(E _Nullable)element completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
- (id _Nullable)trySendElement:(E _Nullable)element __attribute__((swift_name("trySend(element:)")));
@property (readonly) BOOL isClosedForSend __attribute__((swift_name("isClosedForSend")));
@property (readonly) id<KottageSelectClause2> onSend __attribute__((swift_name("onSend")));
@property (readonly) E _Nullable value __attribute__((swift_name("value")));
@property (readonly) E _Nullable valueOrNull __attribute__((swift_name("valueOrNull")));
@end;

__attribute__((swift_name("ProducerScope")))
@protocol KottageProducerScope <KottageCoroutineScope, KottageSendChannel>
@required
@property (readonly) id<KottageSendChannel> channel __attribute__((swift_name("channel")));
@end;

__attribute__((swift_name("Flow")))
@protocol KottageFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KottageFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("AbstractFlow")))
@interface KottageAbstractFlow<T> : KottageBase <KottageFlow>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KottageFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectSafelyCollector:(id<KottageFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectSafely(collector:completionHandler:)")));
@end;

__attribute__((swift_name("FlowCollector")))
@protocol KottageFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("SharedFlow")))
@protocol KottageSharedFlow <KottageFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end;

__attribute__((swift_name("MutableSharedFlow")))
@protocol KottageMutableSharedFlow <KottageSharedFlow, KottageFlowCollector>
@required
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<KottageStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end;

__attribute__((swift_name("StateFlow")))
@protocol KottageStateFlow <KottageSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("MutableStateFlow")))
@protocol KottageMutableStateFlow <KottageStateFlow, KottageMutableSharedFlow>
@required
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingCommand")))
@interface KottageSharingCommand : KottageKotlinEnum<KottageSharingCommand *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KottageSharingCommand *start __attribute__((swift_name("start")));
@property (class, readonly) KottageSharingCommand *stop __attribute__((swift_name("stop")));
@property (class, readonly) KottageSharingCommand *stopAndResetReplayCache __attribute__((swift_name("stopAndResetReplayCache")));
+ (KottageKotlinArray<KottageSharingCommand *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("SharingStarted")))
@protocol KottageSharingStarted
@required
- (id<KottageFlow>)commandSubscriptionCount:(id<KottageStateFlow>)subscriptionCount __attribute__((swift_name("command(subscriptionCount:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingStartedCompanion")))
@interface KottageSharingStartedCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageSharingStartedCompanion *shared __attribute__((swift_name("shared")));
- (id<KottageSharingStarted>)WhileSubscribedStopTimeoutMillis:(int64_t)stopTimeoutMillis replayExpirationMillis:(int64_t)replayExpirationMillis __attribute__((swift_name("WhileSubscribed(stopTimeoutMillis:replayExpirationMillis:)")));
@property (readonly) id<KottageSharingStarted> Eagerly __attribute__((swift_name("Eagerly")));
@property (readonly) id<KottageSharingStarted> Lazily __attribute__((swift_name("Lazily")));
@end;

__attribute__((swift_name("FusibleFlow")))
@protocol KottageFusibleFlow <KottageFlow>
@required
- (id<KottageFlow>)fuseContext:(id<KottageKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(KottageBufferOverflow *)onBufferOverflow __attribute__((swift_name("fuse(context:capacity:onBufferOverflow:)")));
@end;

__attribute__((swift_name("ChannelFlow")))
@interface KottageChannelFlow<T> : KottageBase <KottageFusibleFlow>
- (instancetype)initWithContext:(id<KottageKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(KottageBufferOverflow *)onBufferOverflow __attribute__((swift_name("init(context:capacity:onBufferOverflow:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)additionalToStringProps __attribute__((swift_name("additionalToStringProps()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KottageFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectToScope:(id<KottageProducerScope>)scope completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectTo(scope:completionHandler:)")));
- (KottageChannelFlow<T> *)createContext:(id<KottageKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(KottageBufferOverflow *)onBufferOverflow __attribute__((swift_name("create(context:capacity:onBufferOverflow:)")));
- (id<KottageFlow> _Nullable)dropChannelOperators __attribute__((swift_name("dropChannelOperators()")));
- (id<KottageFlow>)fuseContext:(id<KottageKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(KottageBufferOverflow *)onBufferOverflow __attribute__((swift_name("fuse(context:capacity:onBufferOverflow:)")));
- (id<KottageReceiveChannel>)produceImplScope:(id<KottageCoroutineScope>)scope __attribute__((swift_name("produceImpl(scope:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) id<KottageKotlinCoroutineContext> context __attribute__((swift_name("context")));
@property (readonly) KottageBufferOverflow *onBufferOverflow __attribute__((swift_name("onBufferOverflow")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendingCollector")))
@interface KottageSendingCollector<T> : KottageBase <KottageFlowCollector>
- (instancetype)initWithChannel:(id<KottageSendChannel>)channel __attribute__((swift_name("init(channel:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("SelectBuilder")))
@protocol KottageSelectBuilder
@required
- (void)onTimeoutTimeMillis:(int64_t)timeMillis block:(id<KottageKotlinSuspendFunction0>)block __attribute__((swift_name("onTimeout(timeMillis:block:)")));
- (void)invoke:(id<KottageSelectClause0>)receiver block:(id<KottageKotlinSuspendFunction0>)block __attribute__((swift_name("invoke(_:block:)")));
- (void)invoke:(id<KottageSelectClause1>)receiver block_:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:block_:)")));
- (void)invoke:(id<KottageSelectClause2>)receiver param:(id _Nullable)param block:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:param:block:)")));
- (void)invoke:(id<KottageSelectClause2>)receiver block__:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:block__:)")));
@end;

__attribute__((swift_name("SelectClause1")))
@protocol KottageSelectClause1
@required
- (void)registerSelectClause1Select:(id<KottageSelectInstance>)select block:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause1(select:block:)")));
@end;

__attribute__((swift_name("SelectClause2")))
@protocol KottageSelectClause2
@required
- (void)registerSelectClause2Select:(id<KottageSelectInstance>)select param:(id _Nullable)param block:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause2(select:param:block:)")));
@end;

__attribute__((swift_name("SelectInstance")))
@protocol KottageSelectInstance
@required
- (void)disposeOnSelectHandle:(id<KottageDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(KottageAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(KottageKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(KottageLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<KottageKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("AtomicDesc")))
@interface KottageAtomicDesc : KottageBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(KottageAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(KottageAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property KottageAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("OpDescriptor")))
@interface KottageOpDescriptor : KottageBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(KottageOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KottageAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("AtomicOp")))
@interface KottageAtomicOp<__contravariant T> : KottageOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) KottageAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("LockFreeLinkedListNode")))
@interface KottageLockFreeLinkedListNode : KottageBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(KottageLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(KottageLockFreeLinkedListNode *)node condition:(KottageBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(KottageLockFreeLinkedListNode *)node predicate:(KottageBoolean *(^)(KottageLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(KottageLockFreeLinkedListNode *)node predicate:(KottageBoolean *(^)(KottageLockFreeLinkedListNode *))predicate condition:(KottageBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(KottageLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (KottageLockFreeLinkedListNodeAddLastDesc<KottageLockFreeLinkedListNode *> *)describeAddLastNode:(KottageLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (KottageLockFreeLinkedListNodeRemoveFirstDesc<KottageLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (KottageLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(KottageBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (KottageLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) KottageLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) KottageLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("LockFreeLinkedListHead")))
@interface KottageLockFreeLinkedListHead : KottageLockFreeLinkedListNode
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)forEachBlock:(void (^)(KottageLockFreeLinkedListNode *))block __attribute__((swift_name("forEach(block:)")));
- (KottageLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@end;

__attribute__((swift_name("LockFreeLinkedListNode.AbstractAtomicDesc")))
@interface KottageLockFreeLinkedListNodeAbstractAtomicDesc : KottageAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(KottageAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(KottageLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(KottageLockFreeLinkedListNode *)affected next:(KottageLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(KottageLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(KottageLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(KottageLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(KottageAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(KottageLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (KottageLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(KottageOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(KottageLockFreeLinkedListNode *)affected next:(KottageLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) KottageLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) KottageLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("LockFreeLinkedListNodeAddLastDesc")))
@interface KottageLockFreeLinkedListNodeAddLastDesc<T> : KottageLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(KottageLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(KottageLockFreeLinkedListNode *)affected next:(KottageLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(KottageLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(KottageLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (KottageLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(KottageOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(KottageLockFreeLinkedListNode *)affected next:(KottageLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) KottageLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) KottageLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) KottageLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LockFreeLinkedListNode.PrepareOp")))
@interface KottageLockFreeLinkedListNodePrepareOp : KottageOpDescriptor
- (instancetype)initWithAffected:(KottageLockFreeLinkedListNode *)affected next:(KottageLockFreeLinkedListNode *)next desc:(KottageLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KottageLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) KottageAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) KottageLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) KottageLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("LockFreeLinkedListNodeRemoveFirstDesc")))
@interface KottageLockFreeLinkedListNodeRemoveFirstDesc<T> : KottageLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(KottageLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(KottageLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(KottageLockFreeLinkedListNode *)affected next:(KottageLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(KottageLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(KottageLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (KottageLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(KottageOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(KottageLockFreeLinkedListNode *)affected next:(KottageLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) KottageLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) KottageLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) KottageLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((swift_name("MainDispatcherFactory")))
@protocol KottageMainDispatcherFactory
@required
- (KottageMainCoroutineDispatcher *)createDispatcherAllFactories:(NSArray<id<KottageMainDispatcherFactory>> *)allFactories __attribute__((swift_name("createDispatcher(allFactories:)")));
- (NSString * _Nullable)hintOnError __attribute__((swift_name("hintOnError()")));
@property (readonly) int32_t loadPriority __attribute__((swift_name("loadPriority")));
@end;

__attribute__((swift_name("AtomicfuSynchronizedObject")))
@interface KottageAtomicfuSynchronizedObject : KottageBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)lock __attribute__((swift_name("lock()")));
- (BOOL)tryLock __attribute__((swift_name("tryLock()")));
- (void)unlock __attribute__((swift_name("unlock()")));
@property (readonly, getter=lock_) KottageKotlinAtomicReference<KottageAtomicfuSynchronizedObjectLockState *> *lock __attribute__((swift_name("lock")));
@end;

__attribute__((swift_name("ThreadSafeHeap")))
@interface KottageThreadSafeHeap<T> : KottageAtomicfuSynchronizedObject
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(T)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(T)node cond:(KottageBoolean *(^)(T _Nullable))cond __attribute__((swift_name("addLastIf(node:cond:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (T _Nullable)findPredicate:(KottageBoolean *(^)(T))predicate __attribute__((swift_name("find(predicate:)")));
- (T _Nullable)peek __attribute__((swift_name("peek()")));
- (BOOL)removeNode:(T)node __attribute__((swift_name("remove(node:)")));
- (T _Nullable)removeFirstIfPredicate:(KottageBoolean *(^)(T))predicate __attribute__((swift_name("removeFirstIf(predicate:)")));
- (T _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("ThreadSafeHeapNode")))
@protocol KottageThreadSafeHeapNode
@required
@property KottageThreadSafeHeap<id> * _Nullable heap __attribute__((swift_name("heap")));
@property int32_t index __attribute__((swift_name("index")));
@end;

__attribute__((swift_name("Mutex")))
@protocol KottageMutex
@required
- (BOOL)holdsLockOwner:(id)owner __attribute__((swift_name("holdsLock(owner:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)lockOwner:(id _Nullable)owner completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("lock(owner:completionHandler:)")));
- (BOOL)tryLockOwner:(id _Nullable)owner __attribute__((swift_name("tryLock(owner:)")));
- (void)unlockOwner:(id _Nullable)owner __attribute__((swift_name("unlock(owner:)")));
@property (readonly) BOOL isLocked __attribute__((swift_name("isLocked")));
@property (readonly) id<KottageSelectClause2> onLock __attribute__((swift_name("onLock"))) __attribute__((deprecated("Mutex.onLock deprecated without replacement. For additional details please refer to #2794")));
@end;

__attribute__((swift_name("Semaphore")))
@protocol KottageSemaphore
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)acquireWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("acquire(completionHandler:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (BOOL)tryAcquire __attribute__((swift_name("tryAcquire()")));
@property (readonly) int32_t availablePermits __attribute__((swift_name("availablePermits")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecodeSequenceMode")))
@interface KottageDecodeSequenceMode : KottageKotlinEnum<KottageDecodeSequenceMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KottageDecodeSequenceMode *whitespaceSeparated __attribute__((swift_name("whitespaceSeparated")));
@property (class, readonly) KottageDecodeSequenceMode *arrayWrapped __attribute__((swift_name("arrayWrapped")));
@property (class, readonly) KottageDecodeSequenceMode *autoDetect __attribute__((swift_name("autoDetect")));
+ (KottageKotlinArray<KottageDecodeSequenceMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol KottageKotlinx_serialization_coreSerialFormat
@required
@property (readonly) KottageKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol KottageKotlinx_serialization_coreStringFormat <KottageKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end;

__attribute__((swift_name("Json")))
@interface KottageJson : KottageBase <KottageKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) KottageJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(KottageJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (KottageJsonElement *)encodeToJsonElementSerializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (KottageJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) KottageJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) KottageKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Json.Default")))
@interface KottageJsonDefault : KottageJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageJsonDefault *shared __attribute__((swift_name("shared")));
@end;

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("JsonArray")))
@interface KottageJsonArray : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonArrayBuilder")))
@interface KottageJsonArrayBuilder : KottageBase
- (BOOL)addElement:(KottageJsonElement *)element __attribute__((swift_name("add(element:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonBuilder")))
@interface KottageJsonBuilder : KottageBase
@property BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property BOOL isLenient __attribute__((swift_name("isLenient")));
@property BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property KottageKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonConfiguration")))
@interface KottageJsonConfiguration : KottageBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KottageKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KottageKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KottageKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KottageKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KottageKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KottageKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KottageKotlinx_serialization_coreKSerializer <KottageKotlinx_serialization_coreSerializationStrategy, KottageKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("JsonContentPolymorphicSerializer")))
@interface KottageJsonContentPolymorphicSerializer<T> : KottageBase <KottageKotlinx_serialization_coreKSerializer>
- (instancetype)initWithBaseClass:(id<KottageKotlinKClass>)baseClass __attribute__((swift_name("init(baseClass:)"))) __attribute__((objc_designated_initializer));
- (T)deserializeDecoder:(id<KottageKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id<KottageKotlinx_serialization_coreDeserializationStrategy>)selectDeserializerElement:(KottageJsonElement *)element __attribute__((swift_name("selectDeserializer(element:)")));
- (void)serializeEncoder:(id<KottageKotlinx_serialization_coreEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KottageKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KottageKotlinx_serialization_coreDecoder
@required
- (id<KottageKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KottageKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (KottageKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KottageKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KottageKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KottageKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KottageKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("JsonDecoder")))
@protocol KottageJsonDecoder <KottageKotlinx_serialization_coreDecoder, KottageKotlinx_serialization_coreCompositeDecoder>
@required
- (KottageJsonElement *)decodeJsonElement __attribute__((swift_name("decodeJsonElement()")));
@property (readonly) KottageJson *json __attribute__((swift_name("json")));
@end;

__attribute__((swift_name("JsonElement")))
@interface KottageJsonElement : KottageBase
@property (class, readonly, getter=companion) KottageJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElement.Companion")))
@interface KottageJsonElementCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<KottageKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KottageKotlinx_serialization_coreEncoder
@required
- (id<KottageKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KottageKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KottageKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KottageKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KottageKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KottageKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KottageKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("JsonEncoder")))
@protocol KottageJsonEncoder <KottageKotlinx_serialization_coreEncoder, KottageKotlinx_serialization_coreCompositeEncoder>
@required
- (void)encodeJsonElementElement:(KottageJsonElement *)element __attribute__((swift_name("encodeJsonElement(element:)")));
@property (readonly) KottageJson *json __attribute__((swift_name("json")));
@end;

__attribute__((swift_name("JsonPrimitive")))
@interface KottageJsonPrimitive : KottageJsonElement
@property (class, readonly, getter=companion) KottageJsonPrimitiveCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonNull")))
@interface KottageJsonNull : KottageJsonPrimitive
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonNull __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageJsonNull *shared __attribute__((swift_name("shared")));
- (id<KottageKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<KottageKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(KottageKotlinArray<id<KottageKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
@end;

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("JsonObject")))
@interface KottageJsonObject : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonObjectBuilder")))
@interface KottageJsonObjectBuilder : KottageBase
- (KottageJsonElement * _Nullable)putKey:(NSString *)key element:(KottageJsonElement *)element __attribute__((swift_name("put(key:element:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonPrimitive.Companion")))
@interface KottageJsonPrimitiveCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageJsonPrimitiveCompanion *shared __attribute__((swift_name("shared")));
- (id<KottageKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("JsonTransformingSerializer")))
@interface KottageJsonTransformingSerializer<T> : KottageBase <KottageKotlinx_serialization_coreKSerializer>
- (instancetype)initWithTSerializer:(id<KottageKotlinx_serialization_coreKSerializer>)tSerializer __attribute__((swift_name("init(tSerializer:)"))) __attribute__((objc_designated_initializer));
- (T)deserializeDecoder:(id<KottageKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<KottageKotlinx_serialization_coreEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));
- (KottageJsonElement *)transformDeserializeElement:(KottageJsonElement *)element __attribute__((swift_name("transformDeserialize(element:)")));
- (KottageJsonElement *)transformSerializeElement:(KottageJsonElement *)element __attribute__((swift_name("transformSerialize(element:)")));
@property (readonly) id<KottageKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kottage")))
@interface KottageKottage : KottageBase
- (instancetype)initWithName:(NSString *)name directoryPath:(NSString *)directoryPath environment:(KottageKottageEnvironment *)environment json:(KottageJson *)json dispatcher:(KottageCoroutineDispatcher *)dispatcher scope:(id<KottageCoroutineScope>)scope optionsBuilder:(void (^ _Nullable)(KottageKottageOptionsBuilder *))optionsBuilder __attribute__((swift_name("init(name:directoryPath:environment:json:dispatcher:scope:optionsBuilder:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KottageKottageCompanion *companion __attribute__((swift_name("companion")));
- (id<KottageKottageStorage>)cacheName:(NSString *)name optionsBuilder:(void (^ _Nullable)(KottageKottageStorageOptionsBuilder *))optionsBuilder __attribute__((swift_name("cache(name:optionsBuilder:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)compactWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("compact(completionHandler:)")));
- (KottageKottageEventFlow *)eventFlowAfterUnixTimeMillisAt:(KottageLong * _Nullable)afterUnixTimeMillisAt __attribute__((swift_name("eventFlow(afterUnixTimeMillisAt:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)exportFile:(NSString *)file directoryPath:(NSString *)directoryPath completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("export(file:directoryPath:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDatabaseStatusWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDatabaseStatus(completionHandler:)")));
- (id<KottageKottageStorage>)storageName:(NSString *)name optionsBuilder:(void (^ _Nullable)(KottageKottageStorageOptionsBuilder *))optionsBuilder __attribute__((swift_name("storage(name:optionsBuilder:)")));
@property (readonly) NSString *directoryPath __attribute__((swift_name("directoryPath")));
@property (readonly) KottageKottageEnvironment *environment __attribute__((swift_name("environment")));
@property (readonly) KottageJson *json __attribute__((swift_name("json")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) KottageKottageOptions *options __attribute__((swift_name("options")));
@property (readonly) void (^ _Nullable optionsBuilder)(KottageKottageOptionsBuilder *) __attribute__((swift_name("optionsBuilder")));
@property (readonly) id<KottageFlow> simpleEventFlow __attribute__((swift_name("simpleEventFlow")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kottage.Companion")))
@interface KottageKottageCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKottageCompanion *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)createOldDatabaseName:(NSString *)name directoryPath:(NSString *)directoryPath environment:(KottageKottageEnvironment *)environment version:(int32_t)version dispatcher:(KottageCoroutineDispatcher *)dispatcher completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("createOldDatabase(name:directoryPath:environment:version:dispatcher:completionHandler:)")));
- (KottageKottageDatabaseFiles *)getDatabaseFilesName:(NSString *)name directoryPath:(NSString *)directoryPath __attribute__((swift_name("getDatabaseFiles(name:directoryPath:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kottage.DatabaseFiles")))
@interface KottageKottageDatabaseFiles : KottageBase
- (instancetype)initWithDatabaseFile:(NSString *)databaseFile walFile:(NSString *)walFile shmFile:(NSString *)shmFile __attribute__((swift_name("init(databaseFile:walFile:shmFile:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageDatabaseFiles *)doCopyDatabaseFile:(NSString *)databaseFile walFile:(NSString *)walFile shmFile:(NSString *)shmFile __attribute__((swift_name("doCopy(databaseFile:walFile:shmFile:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *databaseFile __attribute__((swift_name("databaseFile")));
@property (readonly) NSString *shmFile __attribute__((swift_name("shmFile")));
@property (readonly) NSString *walFile __attribute__((swift_name("walFile")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageEntry")))
@interface KottageKottageEntry<T> : KottageBase

/**
 @note This method converts instances of ClassCastException, SerializationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (T _Nullable)getAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("get()")));
- (KottageKottageEntry<id> *)getWithType __attribute__((swift_name("getWithType()")));
- (KottageKottageEntry<id> *)withTypeType:(id<KottageKotlinKType>)type __attribute__((swift_name("withType(type:)")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) KottageLong * _Nullable expireAt __attribute__((swift_name("expireAt")));
@property (readonly) NSString *itemType __attribute__((swift_name("itemType")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) int64_t lastReadAt __attribute__((swift_name("lastReadAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageEnvironment")))
@interface KottageKottageEnvironment : KottageBase
- (instancetype)initWithContext:(KottageKottageContext *)context calendar:(id<KottageKottageCalendar> _Nullable)calendar __attribute__((swift_name("init(context:calendar:)"))) __attribute__((objc_designated_initializer));
- (KottageKottageContext *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KottageKottageCalendar> _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageEnvironment *)doCopyContext:(KottageKottageContext *)context calendar:(id<KottageKottageCalendar> _Nullable)calendar __attribute__((swift_name("doCopy(context:calendar:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KottageKottageCalendar> _Nullable calendar __attribute__((swift_name("calendar")));
@property (readonly) KottageKottageContext *context __attribute__((swift_name("context")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageEvent")))
@interface KottageKottageEvent : KottageBase
- (instancetype)initWithId:(NSString *)id createdAt:(int64_t)createdAt expireAt:(KottageLong * _Nullable)expireAt itemType:(NSString *)itemType itemKey:(NSString *)itemKey listType:(NSString * _Nullable)listType listPositionId:(NSString * _Nullable)listPositionId eventType:(KottageKottageEventType *)eventType __attribute__((swift_name("init(id:createdAt:expireAt:itemType:itemKey:listType:listPositionId:eventType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KottageKottageEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageLong * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageEventType *)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageEvent *)doCopyId:(NSString *)id createdAt:(int64_t)createdAt expireAt:(KottageLong * _Nullable)expireAt itemType:(NSString *)itemType itemKey:(NSString *)itemKey listType:(NSString * _Nullable)listType listPositionId:(NSString * _Nullable)listPositionId eventType:(KottageKottageEventType *)eventType __attribute__((swift_name("doCopy(id:createdAt:expireAt:itemType:itemKey:listType:listPositionId:eventType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) KottageKottageEventType *eventType __attribute__((swift_name("eventType")));
@property (readonly) KottageLong * _Nullable expireAt __attribute__((swift_name("expireAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *itemKey __attribute__((swift_name("itemKey")));
@property (readonly) NSString *itemType __attribute__((swift_name("itemType")));
@property (readonly) NSString * _Nullable listPositionId __attribute__((swift_name("listPositionId")));
@property (readonly) NSString * _Nullable listType __attribute__((swift_name("listType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageEvent.Companion")))
@interface KottageKottageEventCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKottageEventCompanion *shared __attribute__((swift_name("shared")));
- (id<KottageKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageEventFlow")))
@interface KottageKottageEventFlow : KottageBase <KottageFlow>

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KottageFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageEventType")))
@interface KottageKottageEventType : KottageKotlinEnum<KottageKottageEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KottageKottageEventTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KottageKottageEventType *create __attribute__((swift_name("create")));
@property (class, readonly) KottageKottageEventType *update __attribute__((swift_name("update")));
@property (class, readonly) KottageKottageEventType *delete_ __attribute__((swift_name("delete_")));
+ (KottageKotlinArray<KottageKottageEventType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageEventType.Companion")))
@interface KottageKottageEventTypeCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKottageEventTypeCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("KottageList")))
@protocol KottageKottageList
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addKey:(NSString *)key value:(id)value type:(id<KottageKotlinKType>)type metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(key:value:type:metaData:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addAllValues:(NSArray<KottageKottageListValue<id> *> *)values completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addAll(values:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addAllFirstValues:(NSArray<KottageKottageListValue<id> *> *)values completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addAllFirst(values:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addFirstKey:(NSString *)key value:(id)value type:(id<KottageKotlinKType>)type metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addFirst(key:value:type:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addKeyKey:(NSString *)key metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addKey(key:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addKeyFirstKey:(NSString *)key metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addKeyFirst(key:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addKeysKeys:(NSArray<NSString *> *)keys metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addKeys(keys:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addKeysFirstKeys:(NSArray<NSString *> *)keys metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addKeysFirst(keys:metaData:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)compactWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("compact(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPositionId:(NSString *)positionId completionHandler:(void (^)(KottageKottageListEntry * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("get(positionId:completionHandler:)")));

/**
 @note This method converts instances of IndexOutOfBoundsException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getByIndexIndex:(int64_t)index fromPositionId:(NSString * _Nullable)fromPositionId direction:(KottageKottageListDirection *)direction completionHandler:(void (^)(KottageKottageListEntry * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getByIndex(index:fromPositionId:direction:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDebugListRawDataWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDebugListRawData(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDebugStatusWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDebugStatus(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFirstWithCompletionHandler:(void (^)(KottageKottageListEntry * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFirst(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLastWithCompletionHandler:(void (^)(KottageKottageListEntry * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getLast(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPageFromPositionId:(NSString * _Nullable)positionId pageSize:(KottageLong * _Nullable)pageSize direction:(KottageKottageListDirection *)direction completionHandler:(void (^)(KottageKottageListPage * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPageFrom(positionId:pageSize:direction:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSizeWithCompletionHandler:(void (^)(KottageLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSize(completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertAfterPositionId:(NSString *)positionId key:(NSString *)key value:(id)value type:(id<KottageKotlinKType>)type metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertAfter(positionId:key:value:type:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertAllAfterPositionId:(NSString *)positionId values:(NSArray<KottageKottageListValue<id> *> *)values completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertAllAfter(positionId:values:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertAllBeforePositionId:(NSString *)positionId values:(NSArray<KottageKottageListValue<id> *> *)values completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertAllBefore(positionId:values:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertBeforePositionId:(NSString *)positionId key:(NSString *)key value:(id)value type:(id<KottageKotlinKType>)type metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertBefore(positionId:key:value:type:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertKeyAfterPositionId:(NSString *)positionId key:(NSString *)key metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertKeyAfter(positionId:key:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertKeyBeforePositionId:(NSString *)positionId key:(NSString *)key metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertKeyBefore(positionId:key:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertKeysAfterPositionId:(NSString *)positionId keys:(NSArray<NSString *> *)keys metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertKeysAfter(positionId:keys:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertKeysBeforePositionId:(NSString *)positionId keys:(NSArray<NSString *> *)keys metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertKeysBefore(positionId:keys:metaData:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)isEmptyWithCompletionHandler:(void (^)(KottageBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isEmpty(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)isNotEmptyWithCompletionHandler:(void (^)(KottageBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isNotEmpty(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removePositionId:(NSString *)positionId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("remove(positionId:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updatePositionId:(NSString *)positionId key:(NSString *)key value:(id)value type:(id<KottageKotlinKType>)type completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(positionId:key:value:type:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateKeyPositionId:(NSString *)positionId key:(NSString *)key completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateKey(positionId:key:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) KottageKottageListOptions *options __attribute__((swift_name("options")));
@property (readonly) id<KottageKottageStorage> storage __attribute__((swift_name("storage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListDirection")))
@interface KottageKottageListDirection : KottageKotlinEnum<KottageKottageListDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KottageKottageListDirection *forward __attribute__((swift_name("forward")));
@property (class, readonly) KottageKottageListDirection *backward __attribute__((swift_name("backward")));
+ (KottageKotlinArray<KottageKottageListDirection *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListEntry")))
@interface KottageKottageListEntry : KottageBase
@property (class, readonly, getter=companion) KottageKottageListEntryCompanion *companion __attribute__((swift_name("companion")));
- (KottageKottageEntry<id> *)entry __attribute__((swift_name("entry()")));
- (KottageKottageEntry<id> *)entryType:(id<KottageKotlinKType>)type __attribute__((swift_name("entry(type:)")));
- (id)value __attribute__((swift_name("value()")));

/**
 @note This method converts instances of ClassCastException, SerializationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id _Nullable)valueType:(id<KottageKotlinKType>)type error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(type:)")));
@property (readonly) NSString * _Nullable currentKey __attribute__((swift_name("currentKey")));
@property (readonly) NSString * _Nullable info __attribute__((swift_name("info")));
@property (readonly) NSString *itemKey __attribute__((swift_name("itemKey")));
@property (readonly) NSString * _Nullable nextKey __attribute__((swift_name("nextKey")));
@property (readonly) NSString * _Nullable nextPositionId __attribute__((swift_name("nextPositionId")));
@property (readonly) NSString *positionId __attribute__((swift_name("positionId")));
@property (readonly) NSString * _Nullable previousKey __attribute__((swift_name("previousKey")));
@property (readonly) NSString * _Nullable previousPositionId __attribute__((swift_name("previousPositionId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListEntry.Companion")))
@interface KottageKottageListEntryCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKottageListEntryCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListMetaData")))
@interface KottageKottageListMetaData : KottageBase
- (instancetype)initWithInfo:(NSString * _Nullable)info previousKey:(NSString * _Nullable)previousKey currentKey:(NSString * _Nullable)currentKey nextKey:(NSString * _Nullable)nextKey __attribute__((swift_name("init(info:previousKey:currentKey:nextKey:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageListMetaData *)doCopyInfo:(NSString * _Nullable)info previousKey:(NSString * _Nullable)previousKey currentKey:(NSString * _Nullable)currentKey nextKey:(NSString * _Nullable)nextKey __attribute__((swift_name("doCopy(info:previousKey:currentKey:nextKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable currentKey __attribute__((swift_name("currentKey")));
@property (readonly) NSString * _Nullable info __attribute__((swift_name("info")));
@property (readonly) NSString * _Nullable nextKey __attribute__((swift_name("nextKey")));
@property (readonly) NSString * _Nullable previousKey __attribute__((swift_name("previousKey")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListOptions")))
@interface KottageKottageListOptions : KottageBase
- (instancetype)initWithItemExpireTime:(id _Nullable)itemExpireTime __attribute__((swift_name("init(itemExpireTime:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageListOptions *)doCopyItemExpireTime:(id _Nullable)itemExpireTime __attribute__((swift_name("doCopy(itemExpireTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable itemExpireTime __attribute__((swift_name("itemExpireTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListOptions.Builder")))
@interface KottageKottageListOptionsBuilder : KottageBase
- (instancetype)initWithItemExpireTime:(id _Nullable)itemExpireTime __attribute__((swift_name("init(itemExpireTime:)"))) __attribute__((objc_designated_initializer));
- (KottageKottageListOptions *)build __attribute__((swift_name("build()")));
- (id _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageListOptionsBuilder *)doCopyItemExpireTime:(id _Nullable)itemExpireTime __attribute__((swift_name("doCopy(itemExpireTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property id _Nullable itemExpireTime __attribute__((swift_name("itemExpireTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListPage")))
@interface KottageKottageListPage : KottageBase
- (instancetype)initWithItems:(NSArray<KottageKottageListEntry *> *)items previousPositionId:(NSString * _Nullable)previousPositionId nextPositionId:(NSString * _Nullable)nextPositionId hasPrevious:(BOOL)hasPrevious hasNext:(BOOL)hasNext __attribute__((swift_name("init(items:previousPositionId:nextPositionId:hasPrevious:hasNext:)"))) __attribute__((objc_designated_initializer));
- (NSArray<KottageKottageListEntry *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageListPage *)doCopyItems:(NSArray<KottageKottageListEntry *> *)items previousPositionId:(NSString * _Nullable)previousPositionId nextPositionId:(NSString * _Nullable)nextPositionId hasPrevious:(BOOL)hasPrevious hasNext:(BOOL)hasNext __attribute__((swift_name("doCopy(items:previousPositionId:nextPositionId:hasPrevious:hasNext:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL hasNext __attribute__((swift_name("hasNext")));
@property (readonly) BOOL hasPrevious __attribute__((swift_name("hasPrevious")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<KottageKottageListEntry *> *items __attribute__((swift_name("items")));
@property (readonly) NSString * _Nullable nextPositionId __attribute__((swift_name("nextPositionId")));
@property (readonly) NSString * _Nullable previousPositionId __attribute__((swift_name("previousPositionId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListValue")))
@interface KottageKottageListValue<T> : KottageBase
- (instancetype)initWithKey:(NSString *)key value:(T)value type:(id<KottageKotlinKType>)type metaData:(KottageKottageListMetaData * _Nullable)metaData __attribute__((swift_name("init(key:value:type:metaData:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (T)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KottageKotlinKType>)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageListMetaData * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageListValue<T> *)doCopyKey:(NSString *)key value:(T)value type:(id<KottageKotlinKType>)type metaData:(KottageKottageListMetaData * _Nullable)metaData __attribute__((swift_name("doCopy(key:value:type:metaData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) KottageKottageListMetaData * _Nullable metaData __attribute__((swift_name("metaData")));
@property (readonly) id<KottageKotlinKType> type __attribute__((swift_name("type")));
@property (readonly) T value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageOptions")))
@interface KottageKottageOptions : KottageBase
- (instancetype)initWithAutoCompactionDuration:(id _Nullable)autoCompactionDuration garbageCollectionTimeOfInvalidatedListEntries:(id _Nullable)garbageCollectionTimeOfInvalidatedListEntries __attribute__((swift_name("init(autoCompactionDuration:garbageCollectionTimeOfInvalidatedListEntries:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageOptions *)doCopyAutoCompactionDuration:(id _Nullable)autoCompactionDuration garbageCollectionTimeOfInvalidatedListEntries:(id _Nullable)garbageCollectionTimeOfInvalidatedListEntries __attribute__((swift_name("doCopy(autoCompactionDuration:garbageCollectionTimeOfInvalidatedListEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable autoCompactionDuration __attribute__((swift_name("autoCompactionDuration")));
@property (readonly) id _Nullable garbageCollectionTimeOfInvalidatedListEntries __attribute__((swift_name("garbageCollectionTimeOfInvalidatedListEntries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageOptions.Builder")))
@interface KottageKottageOptionsBuilder : KottageBase
- (instancetype)initWithAutoCompactionDuration:(id _Nullable)autoCompactionDuration garbageCollectionTimeOfInvalidatedListEntries:(id _Nullable)garbageCollectionTimeOfInvalidatedListEntries __attribute__((swift_name("init(autoCompactionDuration:garbageCollectionTimeOfInvalidatedListEntries:)"))) __attribute__((objc_designated_initializer));
- (KottageKottageOptions *)build __attribute__((swift_name("build()")));
- (id _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageOptionsBuilder *)doCopyAutoCompactionDuration:(id _Nullable)autoCompactionDuration garbageCollectionTimeOfInvalidatedListEntries:(id _Nullable)garbageCollectionTimeOfInvalidatedListEntries __attribute__((swift_name("doCopy(autoCompactionDuration:garbageCollectionTimeOfInvalidatedListEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property id _Nullable autoCompactionDuration __attribute__((swift_name("autoCompactionDuration")));
@property id _Nullable garbageCollectionTimeOfInvalidatedListEntries __attribute__((swift_name("garbageCollectionTimeOfInvalidatedListEntries")));
@end;

__attribute__((swift_name("KottageStorage")))
@protocol KottageKottageStorage
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)compactWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("compact(completionHandler:)")));
- (KottageKottageEventFlow *)eventFlowAfterUnixTimeMillisAt:(KottageLong * _Nullable)afterUnixTimeMillisAt __attribute__((swift_name("eventFlow(afterUnixTimeMillisAt:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)existsKey:(NSString *)key completionHandler:(void (^)(KottageBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("exists(key:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, ClassCastException, SerializationException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getKey:(NSString *)key type:(id<KottageKotlinKType>)type completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(key:type:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDebugStatusWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDebugStatus(completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEntryKey:(NSString *)key type:(id<KottageKotlinKType>)type completionHandler:(void (^)(KottageKottageEntry<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEntry(key:type:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEntryOrNullKey:(NSString *)key type:(id<KottageKotlinKType>)type completionHandler:(void (^)(KottageKottageEntry<id> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getEntryOrNull(key:type:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEventsAfterUnixTimeMillisAt:(int64_t)afterUnixTimeMillisAt limit:(KottageLong * _Nullable)limit completionHandler:(void (^)(NSArray<KottageKottageEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEvents(afterUnixTimeMillisAt:limit:completionHandler:)")));

/**
 @note This method converts instances of ClassCastException, SerializationException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOrNullKey:(NSString *)key type:(id<KottageKotlinKType>)type completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getOrNull(key:type:completionHandler:)")));
- (id<KottageKottageList>)listName:(NSString *)name optionsBuilder:(void (^ _Nullable)(KottageKottageListOptionsBuilder *))optionsBuilder __attribute__((swift_name("list(name:optionsBuilder:)")));
- (id<KottageKotlinReadOnlyProperty>)nullablePropertyType:(id<KottageKotlinKType>)type key:(NSString * _Nullable)key expireTime:(id _Nullable)expireTime __attribute__((swift_name("nullableProperty(type:key:expireTime:)")));
- (id<KottageKotlinReadOnlyProperty>)propertyType:(id<KottageKotlinKType>)type key:(NSString * _Nullable)key expireTime:(id _Nullable)expireTime defaultValue:(id (^)(void))defaultValue __attribute__((swift_name("property(type:key:expireTime:defaultValue:)")));

/**
 @note This method converts instances of ClassCastException, SerializationException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)putKey:(NSString *)key value:(id)value type:(id<KottageKotlinKType>)type expireTime:(id _Nullable)expireTime completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("put(key:value:type:expireTime:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeKey:(NSString *)key completionHandler:(void (^)(KottageBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeAllKey:(NSString *)key completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("removeAll(key:completionHandler:)")));
@property (readonly) id _Nullable defaultExpireTime __attribute__((swift_name("defaultExpireTime")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) KottageKottageStorageOptions *options __attribute__((swift_name("options")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageStorageOptions")))
@interface KottageKottageStorageOptions : KottageBase
- (instancetype)initWithStrategy:(id<KottageKottageStrategy>)strategy defaultExpireTime:(id _Nullable)defaultExpireTime maxEventEntryCount:(int64_t)maxEventEntryCount eventExpireTime:(id _Nullable)eventExpireTime ignoreJsonDeserializationError:(BOOL)ignoreJsonDeserializationError json:(KottageJson * _Nullable)json encoder:(id<KottageKottageEncoder> _Nullable)encoder __attribute__((swift_name("init(strategy:defaultExpireTime:maxEventEntryCount:eventExpireTime:ignoreJsonDeserializationError:json:encoder:)"))) __attribute__((objc_designated_initializer));
- (id<KottageKottageStrategy>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageJson * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KottageKottageEncoder> _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageStorageOptions *)doCopyStrategy:(id<KottageKottageStrategy>)strategy defaultExpireTime:(id _Nullable)defaultExpireTime maxEventEntryCount:(int64_t)maxEventEntryCount eventExpireTime:(id _Nullable)eventExpireTime ignoreJsonDeserializationError:(BOOL)ignoreJsonDeserializationError json:(KottageJson * _Nullable)json encoder:(id<KottageKottageEncoder> _Nullable)encoder __attribute__((swift_name("doCopy(strategy:defaultExpireTime:maxEventEntryCount:eventExpireTime:ignoreJsonDeserializationError:json:encoder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable defaultExpireTime __attribute__((swift_name("defaultExpireTime")));
@property (readonly) id<KottageKottageEncoder> _Nullable encoder __attribute__((swift_name("encoder")));
@property (readonly) id _Nullable eventExpireTime __attribute__((swift_name("eventExpireTime")));
@property (readonly) BOOL ignoreJsonDeserializationError __attribute__((swift_name("ignoreJsonDeserializationError")));
@property (readonly) KottageJson * _Nullable json __attribute__((swift_name("json")));
@property (readonly) int64_t maxEventEntryCount __attribute__((swift_name("maxEventEntryCount")));
@property (readonly) id<KottageKottageStrategy> strategy __attribute__((swift_name("strategy")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageStorageOptions.Builder")))
@interface KottageKottageStorageOptionsBuilder : KottageBase
- (instancetype)initWithStrategy:(id<KottageKottageStrategy>)strategy defaultExpireTime:(id _Nullable)defaultExpireTime maxEventEntryCount:(int64_t)maxEventEntryCount eventExpireTime:(id _Nullable)eventExpireTime ignoreJsonDeserializationError:(BOOL)ignoreJsonDeserializationError json:(KottageJson * _Nullable)json encoder:(id<KottageKottageEncoder> _Nullable)encoder __attribute__((swift_name("init(strategy:defaultExpireTime:maxEventEntryCount:eventExpireTime:ignoreJsonDeserializationError:json:encoder:)"))) __attribute__((objc_designated_initializer));
- (KottageKottageStorageOptions *)build __attribute__((swift_name("build()")));
- (id<KottageKottageStrategy>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageJson * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KottageKottageEncoder> _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageStorageOptionsBuilder *)doCopyStrategy:(id<KottageKottageStrategy>)strategy defaultExpireTime:(id _Nullable)defaultExpireTime maxEventEntryCount:(int64_t)maxEventEntryCount eventExpireTime:(id _Nullable)eventExpireTime ignoreJsonDeserializationError:(BOOL)ignoreJsonDeserializationError json:(KottageJson * _Nullable)json encoder:(id<KottageKottageEncoder> _Nullable)encoder __attribute__((swift_name("doCopy(strategy:defaultExpireTime:maxEventEntryCount:eventExpireTime:ignoreJsonDeserializationError:json:encoder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property id _Nullable defaultExpireTime __attribute__((swift_name("defaultExpireTime")));
@property id<KottageKottageEncoder> _Nullable encoder __attribute__((swift_name("encoder")));
@property id _Nullable eventExpireTime __attribute__((swift_name("eventExpireTime")));
@property BOOL ignoreJsonDeserializationError __attribute__((swift_name("ignoreJsonDeserializationError")));
@property KottageJson * _Nullable json __attribute__((swift_name("json")));
@property int64_t maxEventEntryCount __attribute__((swift_name("maxEventEntryCount")));
@property id<KottageKottageStrategy> strategy __attribute__((swift_name("strategy")));
@end;

__attribute__((swift_name("KottageCalendar")))
@protocol KottageKottageCalendar
@required
- (int64_t)nowUnixTimeMillis __attribute__((swift_name("nowUnixTimeMillis()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageContext")))
@interface KottageKottageContext : KottageBase
- (instancetype)initWithContext:(KottageCoreContext *)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
- (KottageKottageContext *)doCopyContext:(KottageCoreContext *)context __attribute__((swift_name("doCopy(context:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageSystemCalendar")))
@interface KottageKottageSystemCalendar : KottageBase <KottageKottageCalendar>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int64_t)nowUnixTimeMillis __attribute__((swift_name("nowUnixTimeMillis()")));
@end;

__attribute__((swift_name("KottageStore")))
@protocol KottageKottageStore
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)existsWithCompletionHandler:(void (^)(KottageBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("exists(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("read(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("write(value:completionHandler:)")));
@end;

__attribute__((swift_name("KottageStrategy")))
@protocol KottageKottageStrategy
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)onItemReadTransaction:(id)transaction key:(NSString *)key itemType:(NSString *)itemType now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onItemRead(transaction:key:itemType:now:operator:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)onPostItemCreateTransaction:(id)transaction key:(NSString *)key itemType:(NSString *)itemType itemCount:(int64_t)itemCount now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onPostItemCreate(transaction:key:itemType:itemCount:now:operator:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageFifoStrategy")))
@interface KottageKottageFifoStrategy : KottageBase <KottageKottageStrategy>
- (instancetype)initWithMaxEntryCount:(int64_t)maxEntryCount reduceCount:(KottageLong * _Nullable)reduceCount __attribute__((swift_name("init(maxEntryCount:reduceCount:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)onItemReadTransaction:(id)transaction key:(NSString *)key itemType:(NSString *)itemType now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onItemRead(transaction:key:itemType:now:operator:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)onPostItemCreateTransaction:(id)transaction key:(NSString *)key itemType:(NSString *)itemType itemCount:(int64_t)itemCount now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onPostItemCreate(transaction:key:itemType:itemCount:now:operator:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageKvsStrategy")))
@interface KottageKottageKvsStrategy : KottageBase <KottageKottageStrategy>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)onItemReadTransaction:(id)transaction key:(NSString *)key itemType:(NSString *)itemType now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onItemRead(transaction:key:itemType:now:operator:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)onPostItemCreateTransaction:(id)transaction key:(NSString *)key itemType:(NSString *)itemType itemCount:(int64_t)itemCount now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onPostItemCreate(transaction:key:itemType:itemCount:now:operator:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageLruStrategy")))
@interface KottageKottageLruStrategy : KottageBase <KottageKottageStrategy>
- (instancetype)initWithMaxEntryCount:(int64_t)maxEntryCount reduceCount:(KottageLong * _Nullable)reduceCount __attribute__((swift_name("init(maxEntryCount:reduceCount:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)onItemReadTransaction:(id)transaction key:(NSString *)key itemType:(NSString *)itemType now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onItemRead(transaction:key:itemType:now:operator:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)onPostItemCreateTransaction:(id)transaction key:(NSString *)key itemType:(NSString *)itemType itemCount:(int64_t)itemCount now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onPostItemCreate(transaction:key:itemType:itemCount:now:operator:completionHandler:)")));
@end;

__attribute__((swift_name("KottageStrategyOperator")))
@protocol KottageKottageStrategyOperator
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteExpiredItemsTransaction:(id)transaction itemType:(NSString *)itemType now:(int64_t)now completionHandler:(void (^)(KottageLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteExpiredItems(transaction:itemType:now:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteLeastRecentlyUsedTransaction:(id)transaction itemType:(NSString *)itemType limit:(int64_t)limit completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteLeastRecentlyUsed(transaction:itemType:limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteOlderItemsTransaction:(id)transaction itemType:(NSString *)itemType limit:(int64_t)limit completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteOlderItems(transaction:itemType:limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateItemLastReadTransaction:(id)transaction key:(NSString *)key itemType:(NSString *)itemType now:(int64_t)now completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateItemLastRead(transaction:key:itemType:now:completionHandler:)")));
@end;

__attribute__((swift_name("KottageEncoder")))
@protocol KottageKottageEncoder
@required
- (KottageKotlinByteArray *)decodeEncoded:(KottageKotlinByteArray *)encoded __attribute__((swift_name("decode(encoded:)")));
- (double)decodeToDoubleEncoded:(KottageKotlinByteArray *)encoded __attribute__((swift_name("decodeToDouble(encoded:)")));
- (int64_t)decodeToLongEncoded:(KottageKotlinByteArray *)encoded __attribute__((swift_name("decodeToLong(encoded:)")));
- (NSString *)decodeToStringEncoded:(KottageKotlinByteArray *)encoded __attribute__((swift_name("decodeToString(encoded:)")));
- (KottageKotlinByteArray *)encodeValue:(KottageKotlinByteArray *)value __attribute__((swift_name("encode(value:)")));
- (KottageKotlinByteArray *)encodeValue_:(double)value __attribute__((swift_name("encode(value_:)")));
- (KottageKotlinByteArray *)encodeValue__:(int64_t)value __attribute__((swift_name("encode(value__:)")));
- (KottageKotlinByteArray *)encodeValue___:(NSString *)value __attribute__((swift_name("encode(value___:)")));
@end;

@interface KottageCoroutineDispatcher (Extensions)

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeBlock:(id<KottageKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(block:completionHandler:)")));
@end;

@interface KottageSharingStartedCompanion (Extensions)
- (id<KottageSharingStarted>)WhileSubscribedStopTimeout:(int64_t)stopTimeout replayExpiration:(int64_t)replayExpiration __attribute__((swift_name("WhileSubscribed(stopTimeout:replayExpiration:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KottageKotlinArray<T> : KottageBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KottageInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KottageKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface KottageKotlinArray (Extensions)
- (id<KottageFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface KottageKotlinIntArray : KottageBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KottageInt *(^)(KottageInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KottageKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface KottageKotlinIntArray (Extensions)
- (id<KottageFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongArray")))
@interface KottageKotlinLongArray : KottageBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KottageLong *(^)(KottageInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int64_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KottageKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int64_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface KottageKotlinLongArray (Extensions)
- (id<KottageFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

__attribute__((swift_name("KotlinIterable")))
@protocol KottageKotlinIterable
@required
- (id<KottageKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("KotlinIntProgression")))
@interface KottageKotlinIntProgression : KottageBase <KottageKotlinIterable>
@property (class, readonly, getter=companion) KottageKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (KottageKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end;

__attribute__((swift_name("KotlinClosedRange")))
@protocol KottageKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface KottageKotlinIntRange : KottageKotlinIntProgression <KottageKotlinClosedRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KottageKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(KottageInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KottageInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) KottageInt *start __attribute__((swift_name("start")));
@end;

@interface KottageKotlinIntRange (Extensions)
- (id<KottageFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

__attribute__((swift_name("KotlinLongProgression")))
@interface KottageKotlinLongProgression : KottageBase <KottageKotlinIterable>
@property (class, readonly, getter=companion) KottageKotlinLongProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (KottageKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t first __attribute__((swift_name("first")));
@property (readonly) int64_t last __attribute__((swift_name("last")));
@property (readonly) int64_t step __attribute__((swift_name("step")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange")))
@interface KottageKotlinLongRange : KottageKotlinLongProgression <KottageKotlinClosedRange>
- (instancetype)initWithStart:(int64_t)start endInclusive:(int64_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KottageKotlinLongRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(KottageLong *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KottageLong *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) KottageLong *start __attribute__((swift_name("start")));
@end;

@interface KottageKotlinLongRange (Extensions)
- (id<KottageFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

@interface KottageJsonPrimitive (Extensions)
@property (readonly) BOOL boolean __attribute__((swift_name("boolean")));
@property (readonly) KottageBoolean * _Nullable booleanOrNull __attribute__((swift_name("booleanOrNull")));
@property (readonly) NSString * _Nullable contentOrNull __attribute__((swift_name("contentOrNull")));
@property (readonly, getter=double) double double_ __attribute__((swift_name("double_")));
@property (readonly) KottageDouble * _Nullable doubleOrNull __attribute__((swift_name("doubleOrNull")));
@property (readonly, getter=float) float float_ __attribute__((swift_name("float_")));
@property (readonly) KottageFloat * _Nullable floatOrNull __attribute__((swift_name("floatOrNull")));
@property (readonly, getter=int) int32_t int_ __attribute__((swift_name("int_")));
@property (readonly) KottageInt * _Nullable intOrNull __attribute__((swift_name("intOrNull")));
@property (readonly, getter=long) int64_t long_ __attribute__((swift_name("long_")));
@property (readonly) KottageLong * _Nullable longOrNull __attribute__((swift_name("longOrNull")));
@end;

@interface KottageJsonElement (Extensions)
@property (readonly) NSArray<KottageJsonElement *> *jsonArray __attribute__((swift_name("jsonArray")));
@property (readonly) KottageJsonNull *jsonNull __attribute__((swift_name("jsonNull")));
@property (readonly) NSDictionary<NSString *, KottageJsonElement *> *jsonObject __attribute__((swift_name("jsonObject")));
@property (readonly) KottageJsonPrimitive *jsonPrimitive __attribute__((swift_name("jsonPrimitive")));
@end;

@interface KottageJsonArrayBuilder (Extensions)
- (BOOL)addValue:(KottageBoolean * _Nullable)value __attribute__((swift_name("add(value:)")));
- (BOOL)addValue_:(KottageKotlinNothing * _Nullable)value __attribute__((swift_name("add(value_:)")));
- (BOOL)addValue__:(id _Nullable)value __attribute__((swift_name("add(value__:)")));
- (BOOL)addValue___:(NSString * _Nullable)value __attribute__((swift_name("add(value___:)")));
- (BOOL)addJsonArrayBuilderAction:(void (^)(KottageJsonArrayBuilder *))builderAction __attribute__((swift_name("addJsonArray(builderAction:)")));
- (BOOL)addJsonObjectBuilderAction:(void (^)(KottageJsonObjectBuilder *))builderAction __attribute__((swift_name("addJsonObject(builderAction:)")));
@end;

@interface KottageJson (Extensions)
- (id _Nullable)decodeFromJsonElementJson:(KottageJsonElement *)json __attribute__((swift_name("decodeFromJsonElement(json:)")));
- (KottageJsonElement *)encodeToJsonElementValue:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(value:)")));
- (KottageJsonElement *)decodeStringToJsonTreeDeserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer source:(NSString *)source __attribute__((swift_name("decodeStringToJsonTree(deserializer:source:)")));
- (id _Nullable)readJsonElement:(KottageJsonElement *)element deserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("readJson(element:deserializer:)")));
- (KottageJsonElement *)writeJsonValue:(id _Nullable)value serializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer __attribute__((swift_name("writeJson(value:serializer:)")));
@end;

@interface KottageJsonObjectBuilder (Extensions)
- (KottageJsonElement * _Nullable)putKey:(NSString *)key value:(KottageBoolean * _Nullable)value __attribute__((swift_name("put(key:value:)")));
- (KottageJsonElement * _Nullable)putKey:(NSString *)key value_:(KottageKotlinNothing * _Nullable)value __attribute__((swift_name("put(key:value_:)")));
- (KottageJsonElement * _Nullable)putKey:(NSString *)key value__:(id _Nullable)value __attribute__((swift_name("put(key:value__:)")));
- (KottageJsonElement * _Nullable)putKey:(NSString *)key value___:(NSString * _Nullable)value __attribute__((swift_name("put(key:value___:)")));
- (KottageJsonElement * _Nullable)putJsonArrayKey:(NSString *)key builderAction:(void (^)(KottageJsonArrayBuilder *))builderAction __attribute__((swift_name("putJsonArray(key:builderAction:)")));
- (KottageJsonElement * _Nullable)putJsonObjectKey:(NSString *)key builderAction:(void (^)(KottageJsonObjectBuilder *))builderAction __attribute__((swift_name("putJsonObject(key:builderAction:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobKt")))
@interface KottageJobKt : KottageBase
+ (BOOL)isActive:(id<KottageKotlinCoroutineContext>)receiver __attribute__((swift_name("isActive(_:)")));
+ (id<KottageJob>)job:(id<KottageKotlinCoroutineContext>)receiver __attribute__((swift_name("job(_:)")));
+ (id<KottageCompletableJob>)JobParent:(id<KottageJob> _Nullable)parent __attribute__((swift_name("Job(parent:)")));
+ (void)cancel:(id<KottageKotlinCoroutineContext>)receiver cause:(KottageKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)")));
+ (void)cancel:(id<KottageJob>)receiver message:(NSString *)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(_:message:cause:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)cancelAndJoin:(id<KottageJob>)receiver completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("cancelAndJoin(_:completionHandler:)")));
+ (void)cancelChildren:(id<KottageKotlinCoroutineContext>)receiver cause:(KottageKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancelChildren(_:cause:)")));
+ (void)cancelChildren:(id<KottageJob>)receiver cause_:(KottageKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancelChildren(_:cause_:)")));
+ (void)ensureActive:(id<KottageKotlinCoroutineContext>)receiver __attribute__((swift_name("ensureActive(_:)")));
+ (void)ensureActive_:(id<KottageJob>)receiver __attribute__((swift_name("ensureActive(__:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineScopeKt")))
@interface KottageCoroutineScopeKt : KottageBase
+ (BOOL)isActive:(id<KottageCoroutineScope>)receiver __attribute__((swift_name("isActive(_:)")));
+ (id<KottageCoroutineScope>)CoroutineScopeContext:(id<KottageKotlinCoroutineContext>)context __attribute__((swift_name("CoroutineScope(context:)")));
+ (id<KottageCoroutineScope>)MainScope __attribute__((swift_name("MainScope()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)coroutineScopeBlock:(id<KottageKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("coroutineScope(block:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)currentCoroutineContextWithCompletionHandler:(void (^)(id<KottageKotlinCoroutineContext> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("currentCoroutineContext(completionHandler:)")));
+ (void)cancel:(id<KottageCoroutineScope>)receiver message:(NSString *)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(_:message:cause:)")));
+ (void)cancel:(id<KottageCoroutineScope>)receiver cause:(KottageKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)")));
+ (void)ensureActive:(id<KottageCoroutineScope>)receiver __attribute__((swift_name("ensureActive(_:)")));
+ (id<KottageCoroutineScope>)plus:(id<KottageCoroutineScope>)receiver context:(id<KottageKotlinCoroutineContext>)context __attribute__((swift_name("plus(_:context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompletableDeferredKt")))
@interface KottageCompletableDeferredKt : KottageBase
+ (id<KottageCompletableDeferred>)CompletableDeferredValue:(id _Nullable)value __attribute__((swift_name("CompletableDeferred(value:)")));
+ (id<KottageCompletableDeferred>)CompletableDeferredParent:(id<KottageJob> _Nullable)parent __attribute__((swift_name("CompletableDeferred(parent:)")));
+ (BOOL)completeWith:(id<KottageCompletableDeferred>)receiver result:(id _Nullable)result __attribute__((swift_name("completeWith(_:result:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineExceptionHandlerKt")))
@interface KottageCoroutineExceptionHandlerKt : KottageBase
+ (id<KottageCoroutineExceptionHandler>)CoroutineExceptionHandlerHandler:(void (^)(id<KottageKotlinCoroutineContext>, KottageKotlinThrowable *))handler __attribute__((swift_name("CoroutineExceptionHandler(handler:)")));
+ (void)handleCoroutineExceptionContext:(id<KottageKotlinCoroutineContext>)context exception:(KottageKotlinThrowable *)exception __attribute__((swift_name("handleCoroutineException(context:exception:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RunnableKt")))
@interface KottageRunnableKt : KottageBase
+ (id<KottageRunnable>)RunnableBlock:(void (^)(void))block __attribute__((swift_name("Runnable(block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupervisorKt")))
@interface KottageSupervisorKt : KottageBase
+ (id<KottageCompletableJob>)SupervisorJobParent:(id<KottageJob> _Nullable)parent __attribute__((swift_name("SupervisorJob(parent:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)supervisorScopeBlock:(id<KottageKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("supervisorScope(block:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwaitKt")))
@interface KottageAwaitKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitAllDeferreds:(KottageKotlinArray<id<KottageDeferred>> *)deferreds completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitAll(deferreds:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)joinAllJobs:(KottageKotlinArray<id<KottageJob>> *)jobs completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("joinAll(jobs:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitAll:(id)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitAll(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)joinAll:(id)receiver completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("joinAll(_:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DelayKt")))
@interface KottageDelayKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitCancellationWithCompletionHandler:(void (^)(KottageKotlinNothing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitCancellation(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)delayTimeMillis:(int64_t)timeMillis completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delay(timeMillis:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)delayDuration:(int64_t)duration completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delay(duration:completionHandler:)")));
+ (id<KottageFlow>)debounce:(id<KottageFlow>)receiver timeoutMillis:(KottageLong *(^)(id _Nullable))timeoutMillis __attribute__((swift_name("debounce(_:timeoutMillis:)")));
+ (id<KottageFlow>)debounce:(id<KottageFlow>)receiver timeout:(id (^)(id _Nullable))timeout __attribute__((swift_name("debounce(_:timeout:)")));
+ (id<KottageFlow>)debounce:(id<KottageFlow>)receiver timeoutMillis_:(int64_t)timeoutMillis __attribute__((swift_name("debounce(_:timeoutMillis_:)")));
+ (id<KottageFlow>)debounce:(id<KottageFlow>)receiver timeout_:(int64_t)timeout __attribute__((swift_name("debounce(_:timeout_:)")));
+ (id<KottageFlow>)sample:(id<KottageFlow>)receiver periodMillis:(int64_t)periodMillis __attribute__((swift_name("sample(_:periodMillis:)")));
+ (id<KottageFlow>)sample:(id<KottageFlow>)receiver period:(int64_t)period __attribute__((swift_name("sample(_:period:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultithreadedDispatchersKt")))
@interface KottageMultithreadedDispatchersKt : KottageBase
+ (KottageCloseableCoroutineDispatcher *)doNewFixedThreadPoolContextNThreads:(int32_t)nThreads name:(NSString *)name __attribute__((swift_name("doNewFixedThreadPoolContext(nThreads:name:)")));
+ (KottageCloseableCoroutineDispatcher *)doNewSingleThreadContextName:(NSString *)name __attribute__((swift_name("doNewSingleThreadContext(name:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuildersKt")))
@interface KottageBuildersKt : KottageBase
+ (id _Nullable)runBlockingContext:(id<KottageKotlinCoroutineContext>)context block:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("runBlocking(context:block:)")));
+ (id<KottageFlow>)callbackFlowBlock:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("callbackFlow(block:)")));
+ (id<KottageFlow>)channelFlowBlock:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("channelFlow(block:)")));
+ (id<KottageFlow>)emptyFlow __attribute__((swift_name("emptyFlow()")));
+ (id<KottageFlow>)flowBlock:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("flow(block:)")));
+ (id<KottageFlow>)flowOfValue:(id _Nullable)value __attribute__((swift_name("flowOf(value:)")));
+ (id<KottageFlow>)flowOfElements:(KottageKotlinArray<id> *)elements __attribute__((swift_name("flowOf(elements:)")));
+ (id<KottageFlow>)asFlow:(id _Nullable (^)(void))receiver __attribute__((swift_name("asFlow(_:)")));
+ (id<KottageFlow>)asFlow_:(id)receiver __attribute__((swift_name("asFlow(__:)")));
+ (id<KottageFlow>)asFlow__:(id<KottageKotlinIterator>)receiver __attribute__((swift_name("asFlow(___:)")));
+ (id<KottageFlow>)asFlow___:(id<KottageKotlinSequence>)receiver __attribute__((swift_name("asFlow(____:)")));
+ (id<KottageFlow>)asFlow____:(id<KottageKotlinSuspendFunction0>)receiver __attribute__((swift_name("asFlow(_____:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancellableContinuationKt")))
@interface KottageCancellableContinuationKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)suspendCancellableCoroutineBlock:(void (^)(id<KottageCancellableContinuation>))block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("suspendCancellableCoroutine(block:completionHandler:)")));
+ (void)disposeOnCancellation:(id<KottageCancellableContinuation>)receiver handle:(id<KottageDisposableHandle>)handle __attribute__((swift_name("disposeOnCancellation(_:handle:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Builders_commonKt")))
@interface KottageBuilders_commonKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withContextContext:(id<KottageKotlinCoroutineContext>)context block:(id<KottageKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withContext(context:block:completionHandler:)")));
+ (id<KottageDeferred>)async:(id<KottageCoroutineScope>)receiver context:(id<KottageKotlinCoroutineContext>)context start:(KottageCoroutineStart *)start block:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("async(_:context:start:block:)")));
+ (id<KottageJob>)launch:(id<KottageCoroutineScope>)receiver context:(id<KottageKotlinCoroutineContext>)context start:(KottageCoroutineStart *)start block:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("launch(_:context:start:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeoutKt")))
@interface KottageTimeoutKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutTimeMillis:(int64_t)timeMillis block:(id<KottageKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeout(timeMillis:block:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutTimeout:(int64_t)timeout block:(id<KottageKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeout(timeout:block:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutOrNullTimeMillis:(int64_t)timeMillis block:(id<KottageKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeoutOrNull(timeMillis:block:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutOrNullTimeout:(int64_t)timeout block:(id<KottageKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeoutOrNull(timeout:block:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("YieldKt")))
@interface KottageYieldKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)yieldWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("yield(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineContextKt")))
@interface KottageCoroutineContextKt : KottageBase
+ (id<KottageKotlinCoroutineContext>)doNewCoroutineContext:(id<KottageKotlinCoroutineContext>)receiver addedContext:(id<KottageKotlinCoroutineContext>)addedContext __attribute__((swift_name("doNewCoroutineContext(_:addedContext:)")));
+ (id<KottageKotlinCoroutineContext>)doNewCoroutineContext:(id<KottageCoroutineScope>)receiver context:(id<KottageKotlinCoroutineContext>)context __attribute__((swift_name("doNewCoroutineContext(_:context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancellableKt")))
@interface KottageCancellableKt : KottageBase
+ (void)startCoroutineCancellable:(id<KottageKotlinSuspendFunction0>)receiver completion:(id<KottageKotlinContinuation>)completion __attribute__((swift_name("startCoroutineCancellable(_:completion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BroadcastChannelKt")))
@interface KottageBroadcastChannelKt : KottageBase
+ (id<KottageBroadcastChannel>)BroadcastChannelCapacity:(int32_t)capacity __attribute__((swift_name("BroadcastChannel(capacity:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelKt")))
@interface KottageChannelKt : KottageBase
+ (id<KottageChannel>)ChannelCapacity:(int32_t)capacity onBufferOverflow:(KottageBufferOverflow *)onBufferOverflow onUndeliveredElement:(void (^ _Nullable)(id _Nullable))onUndeliveredElement __attribute__((swift_name("Channel(capacity:onBufferOverflow:onUndeliveredElement:)")));
+ (id _Nullable)getOrElse:(id _Nullable)receiver onFailure:(id _Nullable (^)(KottageKotlinThrowable * _Nullable))onFailure __attribute__((swift_name("getOrElse(_:onFailure:)")));
+ (id _Nullable)onClosed:(id _Nullable)receiver action:(void (^)(KottageKotlinThrowable * _Nullable))action __attribute__((swift_name("onClosed(_:action:)")));
+ (id _Nullable)onFailure:(id _Nullable)receiver action:(void (^)(KottageKotlinThrowable * _Nullable))action __attribute__((swift_name("onFailure(_:action:)")));
+ (id _Nullable)onSuccess:(id _Nullable)receiver action:(void (^)(id _Nullable))action __attribute__((swift_name("onSuccess(_:action:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProduceKt")))
@interface KottageProduceKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitClose:(id<KottageProducerScope>)receiver block:(void (^)(void))block completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitClose(_:block:completionHandler:)")));
+ (id<KottageReceiveChannel>)produce:(id<KottageCoroutineScope>)receiver context:(id<KottageKotlinCoroutineContext>)context capacity:(int32_t)capacity start:(KottageCoroutineStart *)start onCompletion:(void (^ _Nullable)(KottageKotlinThrowable * _Nullable))onCompletion block:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("produce(_:context:capacity:start:onCompletion:block:)")));
+ (id<KottageReceiveChannel>)produce:(id<KottageCoroutineScope>)receiver context:(id<KottageKotlinCoroutineContext>)context capacity:(int32_t)capacity block:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("produce(_:context:capacity:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BroadcastKt")))
@interface KottageBroadcastKt : KottageBase
+ (id<KottageBroadcastChannel>)broadcast:(id<KottageCoroutineScope>)receiver context:(id<KottageKotlinCoroutineContext>)context capacity:(int32_t)capacity start:(KottageCoroutineStart *)start onCompletion:(void (^ _Nullable)(KottageKotlinThrowable * _Nullable))onCompletion block:(id<KottageKotlinSuspendFunction1>)block __attribute__((swift_name("broadcast(_:context:capacity:start:onCompletion:block:)")));
+ (id<KottageBroadcastChannel>)broadcast:(id<KottageReceiveChannel>)receiver capacity:(int32_t)capacity start:(KottageCoroutineStart *)start __attribute__((swift_name("broadcast(_:capacity:start:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Channels_commonKt")))
@interface KottageChannels_commonKt : KottageBase
+ (id _Nullable)consume:(id<KottageBroadcastChannel>)receiver block:(id _Nullable (^)(id<KottageReceiveChannel>))block __attribute__((swift_name("consume(_:block:)")));
+ (id _Nullable)consume:(id<KottageReceiveChannel>)receiver block_:(id _Nullable (^)(id<KottageReceiveChannel>))block __attribute__((swift_name("consume(_:block_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)consumeEach:(id<KottageBroadcastChannel>)receiver action:(void (^)(id _Nullable))action completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("consumeEach(_:action:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)consumeEach:(id<KottageReceiveChannel>)receiver action:(void (^)(id _Nullable))action completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("consumeEach(_:action:completionHandler_:)")));
+ (id<KottageSelectClause1>)onReceiveOrNull:(id<KottageReceiveChannel>)receiver __attribute__((swift_name("onReceiveOrNull(_:)"))) __attribute__((unavailable("Deprecated in the favour of 'onReceiveCatching'")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)receiveOrNull:(id<KottageReceiveChannel>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveOrNull(_:completionHandler:)"))) __attribute__((unavailable("Deprecated in the favour of 'receiveCatching'")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<KottageReceiveChannel>)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelsKt")))
@interface KottageChannelsKt : KottageBase
+ (void)sendBlocking:(id<KottageSendChannel>)receiver element:(id _Nullable)element __attribute__((swift_name("sendBlocking(_:element:)"))) __attribute__((unavailable("Deprecated in the favour of 'trySendBlocking'. Consider handling the result of 'trySendBlocking' explicitly and rethrow exception if necessary")));
+ (id _Nullable)trySendBlocking:(id<KottageSendChannel>)receiver element:(id _Nullable)element __attribute__((swift_name("trySendBlocking(_:element:)")));
+ (id<KottageFlow>)asFlow:(id<KottageBroadcastChannel>)receiver __attribute__((swift_name("asFlow(_:)"))) __attribute__((deprecated("'BroadcastChannel' is obsolete and all corresponding operators are deprecated in the favour of StateFlow and SharedFlow")));
+ (id<KottageFlow>)consumeAsFlow:(id<KottageReceiveChannel>)receiver __attribute__((swift_name("consumeAsFlow(_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)emitAll:(id<KottageFlowCollector>)receiver channel:(id<KottageReceiveChannel>)channel completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emitAll(_:channel:completionHandler:)")));
+ (id<KottageReceiveChannel>)produceIn:(id<KottageFlow>)receiver scope:(id<KottageCoroutineScope>)scope __attribute__((swift_name("produceIn(_:scope:)")));
+ (id<KottageFlow>)receiveAsFlow:(id<KottageReceiveChannel>)receiver __attribute__((swift_name("receiveAsFlow(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MergeKt")))
@interface KottageMergeKt : KottageBase
+ (id<KottageFlow>)mergeFlows:(KottageKotlinArray<id<KottageFlow>> *)flows __attribute__((swift_name("merge(flows:)")));
+ (id<KottageFlow>)flatMapConcat:(id<KottageFlow>)receiver transform:(id<KottageKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapConcat(_:transform:)")));
+ (id<KottageFlow>)flatMapLatest:(id<KottageFlow>)receiver transform:(id<KottageKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapLatest(_:transform:)")));
+ (id<KottageFlow>)flatMapMerge:(id<KottageFlow>)receiver concurrency:(int32_t)concurrency transform:(id<KottageKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapMerge(_:concurrency:transform:)")));
+ (id<KottageFlow>)flattenConcat:(id<KottageFlow>)receiver __attribute__((swift_name("flattenConcat(_:)")));
+ (id<KottageFlow>)flattenMerge:(id<KottageFlow>)receiver concurrency:(int32_t)concurrency __attribute__((swift_name("flattenMerge(_:concurrency:)")));
+ (id<KottageFlow>)mapLatest:(id<KottageFlow>)receiver transform:(id<KottageKotlinSuspendFunction1>)transform __attribute__((swift_name("mapLatest(_:transform:)")));
+ (id<KottageFlow>)merge:(id)receiver __attribute__((swift_name("merge(_:)")));
+ (id<KottageFlow>)transformLatest:(id<KottageFlow>)receiver transform:(id<KottageKotlinSuspendFunction2>)transform __attribute__((swift_name("transformLatest(_:transform:)")));
@property (class, readonly) int32_t DEFAULT_CONCURRENCY __attribute__((swift_name("DEFAULT_CONCURRENCY")));
@property (class, readonly) NSString *DEFAULT_CONCURRENCY_PROPERTY_NAME __attribute__((swift_name("DEFAULT_CONCURRENCY_PROPERTY_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LintKt")))
@interface KottageLintKt : KottageBase
+ (id<KottageKotlinCoroutineContext>)coroutineContext:(id<KottageFlowCollector>)receiver __attribute__((swift_name("coroutineContext(_:)"))) __attribute__((unavailable("coroutineContext is resolved into the property of outer CoroutineScope which is likely to be an error.Use currentCoroutineContext() instead or specify the receiver of coroutineContext explicitly")));
+ (BOOL)isActive:(id<KottageFlowCollector>)receiver __attribute__((swift_name("isActive(_:)"))) __attribute__((unavailable("isActive is resolved into the extension of outer CoroutineScope which is likely to be an error.Use currentCoroutineContext().isActive or cancellable() operator instead or specify the receiver of isActive explicitly. Additionally, flow {} builder emissions are cancellable by default.")));
+ (void)cancel:(id<KottageFlowCollector>)receiver cause:(KottageKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)"))) __attribute__((unavailable("cancel() is resolved into the extension of outer CoroutineScope which is likely to be an error.Use currentCoroutineContext().cancel() instead or specify the receiver of cancel() explicitly")));
+ (id<KottageFlow>)cancellable:(id<KottageSharedFlow>)receiver __attribute__((swift_name("cancellable(_:)"))) __attribute__((unavailable("Applying 'cancellable' to a SharedFlow has no effect. See the SharedFlow documentation on Operator Fusion.")));
+ (id<KottageFlow>)catch:(id<KottageSharedFlow>)receiver action:(id<KottageKotlinSuspendFunction2>)action __attribute__((swift_name("catch(_:action:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator typically has not effect, it can only catch exceptions from 'onSubscribe' operator")));
+ (id<KottageFlow>)conflate:(id<KottageStateFlow>)receiver __attribute__((swift_name("conflate(_:)"))) __attribute__((unavailable("Applying 'conflate' to StateFlow has no effect. See the StateFlow documentation on Operator Fusion.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<KottageSharedFlow>)receiver completionHandler:(void (^)(KottageInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));
+ (id<KottageFlow>)distinctUntilChanged:(id<KottageStateFlow>)receiver __attribute__((swift_name("distinctUntilChanged(_:)"))) __attribute__((unavailable("Applying 'distinctUntilChanged' to StateFlow has no effect. See the StateFlow documentation on Operator Fusion.")));
+ (id<KottageFlow>)flowOn:(id<KottageSharedFlow>)receiver context:(id<KottageKotlinCoroutineContext>)context __attribute__((swift_name("flowOn(_:context:)"))) __attribute__((unavailable("Applying 'flowOn' to SharedFlow has no effect. See the SharedFlow documentation on Operator Fusion.")));
+ (id<KottageFlow>)retry:(id<KottageSharedFlow>)receiver retries:(int64_t)retries predicate:(id<KottageKotlinSuspendFunction1>)predicate __attribute__((swift_name("retry(_:retries:predicate:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator has no effect.")));
+ (id<KottageFlow>)retryWhen:(id<KottageSharedFlow>)receiver predicate:(id<KottageKotlinSuspendFunction3>)predicate __attribute__((swift_name("retryWhen(_:predicate:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator has no effect.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<KottageSharedFlow>)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toSet:(id<KottageSharedFlow>)receiver completionHandler:(void (^)(NSSet<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toSet(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedFlowKt")))
@interface KottageSharedFlowKt : KottageBase
+ (id<KottageMutableSharedFlow>)MutableSharedFlowReplay:(int32_t)replay extraBufferCapacity:(int32_t)extraBufferCapacity onBufferOverflow:(KottageBufferOverflow *)onBufferOverflow __attribute__((swift_name("MutableSharedFlow(replay:extraBufferCapacity:onBufferOverflow:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateFlowKt")))
@interface KottageStateFlowKt : KottageBase
+ (id<KottageMutableStateFlow>)MutableStateFlowValue:(id _Nullable)value __attribute__((swift_name("MutableStateFlow(value:)")));
+ (id _Nullable)getAndUpdate:(id<KottageMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("getAndUpdate(_:function:)")));
+ (void)update:(id<KottageMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("update(_:function:)")));
+ (id _Nullable)updateAndGet:(id<KottageMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("updateAndGet(_:function:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ZipKt")))
@interface KottageZipKt : KottageBase
+ (id<KottageFlow>)combineFlows:(KottageKotlinArray<id<KottageFlow>> *)flows transform:(id<KottageKotlinSuspendFunction1>)transform __attribute__((swift_name("combine(flows:transform:)")));
+ (id<KottageFlow>)combineFlows:(id)flows transform_:(id<KottageKotlinSuspendFunction1>)transform __attribute__((swift_name("combine(flows:transform_:)")));
+ (id<KottageFlow>)combineFlow:(id<KottageFlow>)flow flow2:(id<KottageFlow>)flow2 flow3:(id<KottageFlow>)flow3 flow4:(id<KottageFlow>)flow4 flow5:(id<KottageFlow>)flow5 transform:(id<KottageKotlinSuspendFunction5>)transform __attribute__((swift_name("combine(flow:flow2:flow3:flow4:flow5:transform:)")));
+ (id<KottageFlow>)combineFlow:(id<KottageFlow>)flow flow2:(id<KottageFlow>)flow2 flow3:(id<KottageFlow>)flow3 flow4:(id<KottageFlow>)flow4 transform:(id<KottageKotlinSuspendFunction4>)transform __attribute__((swift_name("combine(flow:flow2:flow3:flow4:transform:)")));
+ (id<KottageFlow>)combineFlow:(id<KottageFlow>)flow flow2:(id<KottageFlow>)flow2 flow3:(id<KottageFlow>)flow3 transform:(id<KottageKotlinSuspendFunction3>)transform __attribute__((swift_name("combine(flow:flow2:flow3:transform:)")));
+ (id<KottageFlow>)combineFlow:(id<KottageFlow>)flow flow2:(id<KottageFlow>)flow2 transform:(id<KottageKotlinSuspendFunction2>)transform __attribute__((swift_name("combine(flow:flow2:transform:)")));
+ (id<KottageFlow>)combineTransformFlows:(KottageKotlinArray<id<KottageFlow>> *)flows transform:(id<KottageKotlinSuspendFunction2>)transform __attribute__((swift_name("combineTransform(flows:transform:)")));
+ (id<KottageFlow>)combineTransformFlows:(id)flows transform_:(id<KottageKotlinSuspendFunction2>)transform __attribute__((swift_name("combineTransform(flows:transform_:)")));
+ (id<KottageFlow>)combineTransformFlow:(id<KottageFlow>)flow flow2:(id<KottageFlow>)flow2 flow3:(id<KottageFlow>)flow3 flow4:(id<KottageFlow>)flow4 flow5:(id<KottageFlow>)flow5 transform:(id<KottageKotlinSuspendFunction6>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:flow4:flow5:transform:)")));
+ (id<KottageFlow>)combineTransformFlow:(id<KottageFlow>)flow flow2:(id<KottageFlow>)flow2 flow3:(id<KottageFlow>)flow3 flow4:(id<KottageFlow>)flow4 transform:(id<KottageKotlinSuspendFunction5>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:flow4:transform:)")));
+ (id<KottageFlow>)combineTransformFlow:(id<KottageFlow>)flow flow2:(id<KottageFlow>)flow2 flow3:(id<KottageFlow>)flow3 transform:(id<KottageKotlinSuspendFunction4>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:transform:)")));
+ (id<KottageFlow>)combineTransformFlow:(id<KottageFlow>)flow flow2:(id<KottageFlow>)flow2 transform:(id<KottageKotlinSuspendFunction3>)transform __attribute__((swift_name("combineTransform(flow:flow2:transform:)")));
+ (id<KottageFlow>)combine:(id<KottageFlow>)receiver flow:(id<KottageFlow>)flow transform:(id<KottageKotlinSuspendFunction2>)transform __attribute__((swift_name("combine(_:flow:transform:)")));
+ (id<KottageFlow>)combineTransform:(id<KottageFlow>)receiver flow:(id<KottageFlow>)flow transform:(id<KottageKotlinSuspendFunction3>)transform __attribute__((swift_name("combineTransform(_:flow:transform:)")));
+ (id<KottageFlow>)zip:(id<KottageFlow>)receiver other:(id<KottageFlow>)other transform:(id<KottageKotlinSuspendFunction2>)transform __attribute__((swift_name("zip(_:other:transform:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareKt")))
@interface KottageShareKt : KottageBase
+ (id<KottageSharedFlow>)asSharedFlow:(id<KottageMutableSharedFlow>)receiver __attribute__((swift_name("asSharedFlow(_:)")));
+ (id<KottageStateFlow>)asStateFlow:(id<KottageMutableStateFlow>)receiver __attribute__((swift_name("asStateFlow(_:)")));
+ (id<KottageSharedFlow>)onSubscription:(id<KottageSharedFlow>)receiver action:(id<KottageKotlinSuspendFunction1>)action __attribute__((swift_name("onSubscription(_:action:)")));
+ (id<KottageSharedFlow>)shareIn:(id<KottageFlow>)receiver scope:(id<KottageCoroutineScope>)scope started:(id<KottageSharingStarted>)started replay:(int32_t)replay __attribute__((swift_name("shareIn(_:scope:started:replay:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)stateIn:(id<KottageFlow>)receiver scope:(id<KottageCoroutineScope>)scope completionHandler:(void (^)(id<KottageStateFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stateIn(_:scope:completionHandler:)")));
+ (id<KottageStateFlow>)stateIn:(id<KottageFlow>)receiver scope:(id<KottageCoroutineScope>)scope started:(id<KottageSharingStarted>)started initialValue:(id _Nullable)initialValue __attribute__((swift_name("stateIn(_:scope:started:initialValue:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextKt")))
@interface KottageContextKt : KottageBase
+ (id<KottageFlow>)buffer:(id<KottageFlow>)receiver capacity:(int32_t)capacity onBufferOverflow:(KottageBufferOverflow *)onBufferOverflow __attribute__((swift_name("buffer(_:capacity:onBufferOverflow:)")));
+ (id<KottageFlow>)cancellable:(id<KottageFlow>)receiver __attribute__((swift_name("cancellable(_:)")));
+ (id<KottageFlow>)conflate:(id<KottageFlow>)receiver __attribute__((swift_name("conflate(_:)")));
+ (id<KottageFlow>)flowOn:(id<KottageFlow>)receiver context:(id<KottageKotlinCoroutineContext>)context __attribute__((swift_name("flowOn(_:context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MigrationKt")))
@interface KottageMigrationKt : KottageBase
+ (id<KottageFlow>)cache:(id<KottageFlow>)receiver __attribute__((swift_name("cache(_:)"))) __attribute__((unavailable("Flow analogue of 'cache()' is 'shareIn' with unlimited replay and 'started = SharingStared.Lazily' argument'")));
+ (id<KottageFlow>)combineLatest:(id<KottageFlow>)receiver other:(id<KottageFlow>)other other2:(id<KottageFlow>)other2 other3:(id<KottageFlow>)other3 other4:(id<KottageFlow>)other4 transform:(id<KottageKotlinSuspendFunction5>)transform __attribute__((swift_name("combineLatest(_:other:other2:other3:other4:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<KottageFlow>)combineLatest:(id<KottageFlow>)receiver other:(id<KottageFlow>)other other2:(id<KottageFlow>)other2 other3:(id<KottageFlow>)other3 transform:(id<KottageKotlinSuspendFunction4>)transform __attribute__((swift_name("combineLatest(_:other:other2:other3:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<KottageFlow>)combineLatest:(id<KottageFlow>)receiver other:(id<KottageFlow>)other other2:(id<KottageFlow>)other2 transform:(id<KottageKotlinSuspendFunction3>)transform __attribute__((swift_name("combineLatest(_:other:other2:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<KottageFlow>)combineLatest:(id<KottageFlow>)receiver other:(id<KottageFlow>)other transform:(id<KottageKotlinSuspendFunction2>)transform __attribute__((swift_name("combineLatest(_:other:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<KottageFlow>)compose:(id<KottageFlow>)receiver transformer:(id<KottageFlow> (^)(id<KottageFlow>))transformer __attribute__((swift_name("compose(_:transformer:)"))) __attribute__((unavailable("Flow analogue of 'compose' is 'let'")));
+ (id<KottageFlow>)concatMap:(id<KottageFlow>)receiver mapper:(id<KottageFlow> (^)(id _Nullable))mapper __attribute__((swift_name("concatMap(_:mapper:)"))) __attribute__((unavailable("Flow analogue of 'concatMap' is 'flatMapConcat'")));
+ (id<KottageFlow>)concatWith:(id<KottageFlow>)receiver value:(id _Nullable)value __attribute__((swift_name("concatWith(_:value:)"))) __attribute__((unavailable("Flow analogue of 'concatWith' is 'onCompletion'. Use 'onCompletion { emit(value) }'")));
+ (id<KottageFlow>)concatWith:(id<KottageFlow>)receiver other:(id<KottageFlow>)other __attribute__((swift_name("concatWith(_:other:)"))) __attribute__((unavailable("Flow analogue of 'concatWith' is 'onCompletion'. Use 'onCompletion { if (it == null) emitAll(other) }'")));
+ (id<KottageFlow>)delayEach:(id<KottageFlow>)receiver timeMillis:(int64_t)timeMillis __attribute__((swift_name("delayEach(_:timeMillis:)"))) __attribute__((unavailable("Use 'onEach { delay(timeMillis) }'")));
+ (id<KottageFlow>)delayFlow:(id<KottageFlow>)receiver timeMillis:(int64_t)timeMillis __attribute__((swift_name("delayFlow(_:timeMillis:)"))) __attribute__((unavailable("Use 'onStart { delay(timeMillis) }'")));
+ (id<KottageFlow>)flatMap:(id<KottageFlow>)receiver mapper:(id<KottageKotlinSuspendFunction1>)mapper __attribute__((swift_name("flatMap(_:mapper:)"))) __attribute__((unavailable("Flow analogue is 'flatMapConcat'")));
+ (id<KottageFlow>)flatten:(id<KottageFlow>)receiver __attribute__((swift_name("flatten(_:)"))) __attribute__((unavailable("Flow analogue of 'flatten' is 'flattenConcat'")));
+ (void)forEach:(id<KottageFlow>)receiver action:(id<KottageKotlinSuspendFunction1>)action __attribute__((swift_name("forEach(_:action:)"))) __attribute__((unavailable("Flow analogue of 'forEach' is 'collect'")));
+ (id<KottageFlow>)merge:(id<KottageFlow>)receiver __attribute__((swift_name("merge(_:)"))) __attribute__((unavailable("Flow analogue of 'merge' is 'flattenConcat'")));
+ (id<KottageFlow>)observeOn:(id<KottageFlow>)receiver context:(id<KottageKotlinCoroutineContext>)context __attribute__((swift_name("observeOn(_:context:)"))) __attribute__((unavailable("Collect flow in the desired context instead")));
+ (id<KottageFlow>)onErrorResume:(id<KottageFlow>)receiver fallback:(id<KottageFlow>)fallback __attribute__((swift_name("onErrorResume(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emitAll(fallback) }'")));
+ (id<KottageFlow>)onErrorResumeNext:(id<KottageFlow>)receiver fallback:(id<KottageFlow>)fallback __attribute__((swift_name("onErrorResumeNext(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emitAll(fallback) }'")));
+ (id<KottageFlow>)onErrorReturn:(id<KottageFlow>)receiver fallback:(id _Nullable)fallback __attribute__((swift_name("onErrorReturn(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emit(fallback) }'")));
+ (id<KottageFlow>)onErrorReturn:(id<KottageFlow>)receiver fallback:(id _Nullable)fallback predicate:(KottageBoolean *(^)(KottageKotlinThrowable *))predicate __attribute__((swift_name("onErrorReturn(_:fallback:predicate:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { e -> if (predicate(e)) emit(fallback) else throw e }'")));
+ (id<KottageFlow>)publish:(id<KottageFlow>)receiver __attribute__((swift_name("publish(_:)"))) __attribute__((unavailable("Flow analogue of 'publish()' is 'shareIn'. \npublish().connect() is the default strategy (no extra call is needed), \npublish().autoConnect() translates to 'started = SharingStared.Lazily' argument, \npublish().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<KottageFlow>)publish:(id<KottageFlow>)receiver bufferSize:(int32_t)bufferSize __attribute__((swift_name("publish(_:bufferSize:)"))) __attribute__((unavailable("Flow analogue of 'publish(bufferSize)' is 'buffer' followed by 'shareIn'. \npublish().connect() is the default strategy (no extra call is needed), \npublish().autoConnect() translates to 'started = SharingStared.Lazily' argument, \npublish().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<KottageFlow>)publishOn:(id<KottageFlow>)receiver context:(id<KottageKotlinCoroutineContext>)context __attribute__((swift_name("publishOn(_:context:)"))) __attribute__((unavailable("Collect flow in the desired context instead")));
+ (id<KottageFlow>)replay:(id<KottageFlow>)receiver __attribute__((swift_name("replay(_:)"))) __attribute__((unavailable("Flow analogue of 'replay()' is 'shareIn' with unlimited replay. \nreplay().connect() is the default strategy (no extra call is needed), \nreplay().autoConnect() translates to 'started = SharingStared.Lazily' argument, \nreplay().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<KottageFlow>)replay:(id<KottageFlow>)receiver bufferSize:(int32_t)bufferSize __attribute__((swift_name("replay(_:bufferSize:)"))) __attribute__((unavailable("Flow analogue of 'replay(bufferSize)' is 'shareIn' with the specified replay parameter. \nreplay().connect() is the default strategy (no extra call is needed), \nreplay().autoConnect() translates to 'started = SharingStared.Lazily' argument, \nreplay().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<KottageFlow>)scanFold:(id<KottageFlow>)receiver initial:(id _Nullable)initial operation:(id<KottageKotlinSuspendFunction2>)operation __attribute__((swift_name("scanFold(_:initial:operation:)"))) __attribute__((unavailable("Flow has less verbose 'scan' shortcut")));
+ (id<KottageFlow>)scanReduce:(id<KottageFlow>)receiver operation:(id<KottageKotlinSuspendFunction2>)operation __attribute__((swift_name("scanReduce(_:operation:)"))) __attribute__((unavailable("'scanReduce' was renamed to 'runningReduce' to be consistent with Kotlin standard library")));
+ (id<KottageFlow>)skip:(id<KottageFlow>)receiver count:(int32_t)count __attribute__((swift_name("skip(_:count:)"))) __attribute__((unavailable("Flow analogue of 'skip' is 'drop'")));
+ (id<KottageFlow>)startWith:(id<KottageFlow>)receiver value:(id _Nullable)value __attribute__((swift_name("startWith(_:value:)"))) __attribute__((unavailable("Flow analogue of 'startWith' is 'onStart'. Use 'onStart { emit(value) }'")));
+ (id<KottageFlow>)startWith:(id<KottageFlow>)receiver other:(id<KottageFlow>)other __attribute__((swift_name("startWith(_:other:)"))) __attribute__((unavailable("Flow analogue of 'startWith' is 'onStart'. Use 'onStart { emitAll(other) }'")));
+ (void)subscribe:(id<KottageFlow>)receiver __attribute__((swift_name("subscribe(_:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (void)subscribe:(id<KottageFlow>)receiver onEach:(id<KottageKotlinSuspendFunction1>)onEach __attribute__((swift_name("subscribe(_:onEach:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (void)subscribe:(id<KottageFlow>)receiver onEach:(id<KottageKotlinSuspendFunction1>)onEach onError:(id<KottageKotlinSuspendFunction1>)onError __attribute__((swift_name("subscribe(_:onEach:onError:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (id<KottageFlow>)subscribeOn:(id<KottageFlow>)receiver context:(id<KottageKotlinCoroutineContext>)context __attribute__((swift_name("subscribeOn(_:context:)"))) __attribute__((unavailable("Use 'flowOn' instead")));
+ (id<KottageFlow>)switchMap:(id<KottageFlow>)receiver transform:(id<KottageKotlinSuspendFunction1>)transform __attribute__((swift_name("switchMap(_:transform:)"))) __attribute__((unavailable("Flow analogues of 'switchMap' are 'transformLatest', 'flatMapLatest' and 'mapLatest'")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorsKt")))
@interface KottageErrorsKt : KottageBase
+ (id<KottageFlow>)catch:(id<KottageFlow>)receiver action:(id<KottageKotlinSuspendFunction2>)action __attribute__((swift_name("catch(_:action:)")));
+ (id<KottageFlow>)retry:(id<KottageFlow>)receiver retries:(int64_t)retries predicate:(id<KottageKotlinSuspendFunction1>)predicate __attribute__((swift_name("retry(_:retries:predicate:)")));
+ (id<KottageFlow>)retryWhen:(id<KottageFlow>)receiver predicate:(id<KottageKotlinSuspendFunction3>)predicate __attribute__((swift_name("retryWhen(_:predicate:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectKt")))
@interface KottageCollectKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collect:(id<KottageFlow>)receiver completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collectIndexed:(id<KottageFlow>)receiver action:(id<KottageKotlinSuspendFunction2>)action completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectIndexed(_:action:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collectLatest:(id<KottageFlow>)receiver action:(id<KottageKotlinSuspendFunction1>)action completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectLatest(_:action:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)emitAll:(id<KottageFlowCollector>)receiver flow:(id<KottageFlow>)flow completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emitAll(_:flow:completionHandler:)")));
+ (id<KottageJob>)launchIn:(id<KottageFlow>)receiver scope:(id<KottageCoroutineScope>)scope __attribute__((swift_name("launchIn(_:scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountKt")))
@interface KottageCountKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<KottageFlow>)receiver completionHandler:(void (^)(KottageInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<KottageFlow>)receiver predicate:(id<KottageKotlinSuspendFunction1>)predicate completionHandler:(void (^)(KottageInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:predicate:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DistinctKt")))
@interface KottageDistinctKt : KottageBase
+ (id<KottageFlow>)distinctUntilChanged:(id<KottageFlow>)receiver __attribute__((swift_name("distinctUntilChanged(_:)")));
+ (id<KottageFlow>)distinctUntilChanged:(id<KottageFlow>)receiver areEquivalent:(KottageBoolean *(^)(id _Nullable, id _Nullable))areEquivalent __attribute__((swift_name("distinctUntilChanged(_:areEquivalent:)")));
+ (id<KottageFlow>)distinctUntilChangedBy:(id<KottageFlow>)receiver keySelector:(id _Nullable (^)(id _Nullable))keySelector __attribute__((swift_name("distinctUntilChangedBy(_:keySelector:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LimitKt")))
@interface KottageLimitKt : KottageBase
+ (id<KottageFlow>)drop:(id<KottageFlow>)receiver count:(int32_t)count __attribute__((swift_name("drop(_:count:)")));
+ (id<KottageFlow>)dropWhile:(id<KottageFlow>)receiver predicate:(id<KottageKotlinSuspendFunction1>)predicate __attribute__((swift_name("dropWhile(_:predicate:)")));
+ (id<KottageFlow>)take:(id<KottageFlow>)receiver count:(int32_t)count __attribute__((swift_name("take(_:count:)")));
+ (id<KottageFlow>)takeWhile:(id<KottageFlow>)receiver predicate:(id<KottageKotlinSuspendFunction1>)predicate __attribute__((swift_name("takeWhile(_:predicate:)")));
+ (id<KottageFlow>)transformWhile:(id<KottageFlow>)receiver transform:(id<KottageKotlinSuspendFunction2>)transform __attribute__((swift_name("transformWhile(_:transform:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransformKt")))
@interface KottageTransformKt : KottageBase
+ (id<KottageFlow>)filter:(id<KottageFlow>)receiver predicate:(id<KottageKotlinSuspendFunction1>)predicate __attribute__((swift_name("filter(_:predicate:)")));
+ (id<KottageFlow>)filterIsInstance:(id<KottageFlow>)receiver __attribute__((swift_name("filterIsInstance(_:)")));
+ (id<KottageFlow>)filterNot:(id<KottageFlow>)receiver predicate:(id<KottageKotlinSuspendFunction1>)predicate __attribute__((swift_name("filterNot(_:predicate:)")));
+ (id<KottageFlow>)filterNotNull:(id<KottageFlow>)receiver __attribute__((swift_name("filterNotNull(_:)")));
+ (id<KottageFlow>)map:(id<KottageFlow>)receiver transform:(id<KottageKotlinSuspendFunction1>)transform __attribute__((swift_name("map(_:transform:)")));
+ (id<KottageFlow>)mapNotNull:(id<KottageFlow>)receiver transform:(id<KottageKotlinSuspendFunction1>)transform __attribute__((swift_name("mapNotNull(_:transform:)")));
+ (id<KottageFlow>)onEach:(id<KottageFlow>)receiver action:(id<KottageKotlinSuspendFunction1>)action __attribute__((swift_name("onEach(_:action:)")));
+ (id<KottageFlow>)runningFold:(id<KottageFlow>)receiver initial:(id _Nullable)initial operation:(id<KottageKotlinSuspendFunction2>)operation __attribute__((swift_name("runningFold(_:initial:operation:)")));
+ (id<KottageFlow>)runningReduce:(id<KottageFlow>)receiver operation:(id<KottageKotlinSuspendFunction2>)operation __attribute__((swift_name("runningReduce(_:operation:)")));
+ (id<KottageFlow>)scan:(id<KottageFlow>)receiver initial:(id _Nullable)initial operation:(id<KottageKotlinSuspendFunction2>)operation __attribute__((swift_name("scan(_:initial:operation:)")));
+ (id<KottageFlow>)withIndex:(id<KottageFlow>)receiver __attribute__((swift_name("withIndex(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReduceKt")))
@interface KottageReduceKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)first:(id<KottageFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("first(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)first:(id<KottageFlow>)receiver predicate:(id<KottageKotlinSuspendFunction1>)predicate completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("first(_:predicate:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)firstOrNull:(id<KottageFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("firstOrNull(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)firstOrNull:(id<KottageFlow>)receiver predicate:(id<KottageKotlinSuspendFunction1>)predicate completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("firstOrNull(_:predicate:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)fold:(id<KottageFlow>)receiver initial:(id _Nullable)initial operation:(id<KottageKotlinSuspendFunction2>)operation completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("fold(_:initial:operation:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)last:(id<KottageFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("last(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)lastOrNull:(id<KottageFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("lastOrNull(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)reduce:(id<KottageFlow>)receiver operation:(id<KottageKotlinSuspendFunction2>)operation completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("reduce(_:operation:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)single:(id<KottageFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("single(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)singleOrNull:(id<KottageFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("singleOrNull(_:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmittersKt")))
@interface KottageEmittersKt : KottageBase
+ (id<KottageFlow>)onCompletion:(id<KottageFlow>)receiver action:(id<KottageKotlinSuspendFunction2>)action __attribute__((swift_name("onCompletion(_:action:)")));
+ (id<KottageFlow>)onEmpty:(id<KottageFlow>)receiver action:(id<KottageKotlinSuspendFunction1>)action __attribute__((swift_name("onEmpty(_:action:)")));
+ (id<KottageFlow>)onStart:(id<KottageFlow>)receiver action:(id<KottageKotlinSuspendFunction1>)action __attribute__((swift_name("onStart(_:action:)")));
+ (id<KottageFlow>)transform:(id<KottageFlow>)receiver transform:(id<KottageKotlinSuspendFunction2>)transform __attribute__((swift_name("transform(_:transform:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectionKt")))
@interface KottageCollectionKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toCollection:(id<KottageFlow>)receiver destination:(id)destination completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toCollection(_:destination:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<KottageFlow>)receiver destination:(NSMutableArray<id> *)destination completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:destination:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toSet:(id<KottageFlow>)receiver destination:(KottageMutableSet<id> *)destination completionHandler:(void (^)(NSSet<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toSet(_:destination:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectKt")))
@interface KottageSelectKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)selectBuilder:(void (^)(id<KottageSelectBuilder>))builder completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("select(builder:completionHandler:)")));
+ (void)onTimeout:(id<KottageSelectBuilder>)receiver timeout:(int64_t)timeout block:(id<KottageKotlinSuspendFunction0>)block __attribute__((swift_name("onTimeout(_:timeout:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectUnbiasedKt")))
@interface KottageSelectUnbiasedKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)selectUnbiasedBuilder:(void (^)(id<KottageSelectBuilder>))builder completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("selectUnbiased(builder:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhileSelectKt")))
@interface KottageWhileSelectKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)whileSelectBuilder:(void (^)(id<KottageSelectBuilder>))builder completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("whileSelect(builder:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SynchronizedKt")))
@interface KottageSynchronizedKt : KottageBase
+ (id _Nullable)synchronizedLock:(KottageAtomicfuSynchronizedObject *)lock block:(id _Nullable (^)(void))block __attribute__((swift_name("synchronized(lock:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DispatchedContinuationKt")))
@interface KottageDispatchedContinuationKt : KottageBase
+ (void)resumeCancellableWith:(id<KottageKotlinContinuation>)receiver result:(id _Nullable)result onCancellation:(void (^ _Nullable)(KottageKotlinThrowable *))onCancellation __attribute__((swift_name("resumeCancellableWith(_:result:onCancellation:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MutexKt")))
@interface KottageMutexKt : KottageBase
+ (id<KottageMutex>)MutexLocked:(BOOL)locked __attribute__((swift_name("Mutex(locked:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withLock:(id<KottageMutex>)receiver owner:(id _Nullable)owner action:(id _Nullable (^)(void))action completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withLock(_:owner:action:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SemaphoreKt")))
@interface KottageSemaphoreKt : KottageBase
+ (id<KottageSemaphore>)SemaphorePermits:(int32_t)permits acquiredPermits:(int32_t)acquiredPermits __attribute__((swift_name("Semaphore(permits:acquiredPermits:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withPermit:(id<KottageSemaphore>)receiver action:(id _Nullable (^)(void))action completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withPermit(_:action:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonKt")))
@interface KottageJsonKt : KottageBase
+ (KottageJson *)JsonFrom:(KottageJson *)from builderAction:(void (^)(KottageJsonBuilder *))builderAction __attribute__((swift_name("Json(from:builderAction:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElementKt")))
@interface KottageJsonElementKt : KottageBase
+ (KottageJsonPrimitive *)JsonPrimitiveValue:(KottageBoolean * _Nullable)value __attribute__((swift_name("JsonPrimitive(value:)")));
+ (KottageJsonNull *)JsonPrimitiveValue_:(KottageKotlinNothing * _Nullable)value __attribute__((swift_name("JsonPrimitive(value_:)")));
+ (KottageJsonPrimitive *)JsonPrimitiveValue__:(id _Nullable)value __attribute__((swift_name("JsonPrimitive(value__:)")));
+ (KottageJsonPrimitive *)JsonPrimitiveValue___:(NSString * _Nullable)value __attribute__((swift_name("JsonPrimitive(value___:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElementBuildersKt")))
@interface KottageJsonElementBuildersKt : KottageBase
+ (NSArray<KottageJsonElement *> *)buildJsonArrayBuilderAction:(void (^)(KottageJsonArrayBuilder *))builderAction __attribute__((swift_name("buildJsonArray(builderAction:)")));
+ (NSDictionary<NSString *, KottageJsonElement *> *)buildJsonObjectBuilderAction:(void (^)(KottageJsonObjectBuilder *))builderAction __attribute__((swift_name("buildJsonObject(builderAction:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListValueKt")))
@interface KottageKottageListValueKt : KottageBase
+ (KottageKottageListValue<id> *)kottageListValueKey:(NSString *)key value:(id)value metaData:(KottageKottageListMetaData * _Nullable)metaData __attribute__((swift_name("kottageListValue(key:value:metaData:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListKt")))
@interface KottageKottageListKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)add:(id<KottageKottageList>)receiver key:(NSString *)key value:(id)value metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(_:key:value:metaData:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)addFirst:(id<KottageKottageList>)receiver key:(NSString *)key value:(id)value metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addFirst(_:key:value:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)insertAfter:(id<KottageKottageList>)receiver positionId:(NSString *)positionId key:(NSString *)key value:(id)value metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertAfter(_:positionId:key:value:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)insertBefore:(id<KottageKottageList>)receiver positionId:(NSString *)positionId key:(NSString *)key value:(id)value metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertBefore(_:positionId:key:value:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)update:(id<KottageKottageList>)receiver positionId:(NSString *)positionId key:(NSString *)key value:(id)value completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(_:positionId:key:value:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageStorageKt")))
@interface KottageKottageStorageKt : KottageBase

/**
 @note This method converts instances of NoSuchElementException, ClassCastException, SerializationException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)get:(id<KottageKottageStorage>)receiver key:(NSString *)key completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(_:key:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)getEntry:(id<KottageKottageStorage>)receiver key:(NSString *)key completionHandler:(void (^)(KottageKottageEntry<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEntry(_:key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)getEntryOrNull:(id<KottageKottageStorage>)receiver key:(NSString *)key completionHandler:(void (^)(KottageKottageEntry<id> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getEntryOrNull(_:key:completionHandler:)")));

/**
 @note This method converts instances of ClassCastException, SerializationException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)getOrNull:(id<KottageKottageStorage>)receiver key:(NSString *)key completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getOrNull(_:key:completionHandler:)")));
+ (id<KottageKotlinReadOnlyProperty>)nullableProperty:(id<KottageKottageStorage>)receiver key:(NSString * _Nullable)key expireTime:(id _Nullable)expireTime __attribute__((swift_name("nullableProperty(_:key:expireTime:)")));
+ (id<KottageKotlinReadOnlyProperty>)property:(id<KottageKottageStorage>)receiver key:(NSString * _Nullable)key expireTime:(id _Nullable)expireTime defaultValue:(id (^)(void))defaultValue __attribute__((swift_name("property(_:key:expireTime:defaultValue:)")));

/**
 @note This method converts instances of ClassCastException, SerializationException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)put:(id<KottageKottageStorage>)receiver key:(NSString *)key value:(id)value expireTime:(id _Nullable)expireTime completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("put(_:key:value:expireTime:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol KottageKotlinSequence
@required
- (id<KottageKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol KottageKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol KottageKotlinSuspendFunction0 <KottageKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol KottageKotlinSuspendFunction1 <KottageKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KottageKotlinEnumCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AtomicfuSynchronizedObject.LockState")))
@interface KottageAtomicfuSynchronizedObjectLockState : KottageBase
- (instancetype)initWithStatus:(KottageAtomicfuSynchronizedObjectStatus *)status nestedLocks:(int32_t)nestedLocks waiters:(int32_t)waiters ownerThreadId:(void * _Nullable)ownerThreadId mutex:(void * _Nullable)mutex __attribute__((swift_name("init(status:nestedLocks:waiters:ownerThreadId:mutex:)"))) __attribute__((objc_designated_initializer));
@property (readonly) void * _Nullable mutex __attribute__((swift_name("mutex")));
@property (readonly) int32_t nestedLocks __attribute__((swift_name("nestedLocks")));
@property (readonly) void * _Nullable ownerThreadId __attribute__((swift_name("ownerThreadId")));
@property (readonly) KottageAtomicfuSynchronizedObjectStatus *status __attribute__((swift_name("status")));
@property (readonly) int32_t waiters __attribute__((swift_name("waiters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinAtomicReference")))
@interface KottageKotlinAtomicReference<T> : KottageBase
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (BOOL)compareAndSetExpected:(T _Nullable)expected new:(T _Nullable)new_ __attribute__((swift_name("compareAndSet(expected:new:)")));
- (T _Nullable)compareAndSwapExpected:(T _Nullable)expected new:(T _Nullable)new_ __attribute__((swift_name("compareAndSwap(expected:new:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KottageKotlinx_serialization_coreSerializersModule : KottageBase
- (void)dumpToCollector:(id<KottageKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<KottageKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KottageKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KottageKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<KottageKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KottageKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<KottageKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KottageKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KottageKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<KottageKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<KottageKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<KottageKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) KottageKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KottageKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KottageKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol KottageKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol KottageKotlinKClass <KottageKotlinKDeclarationContainer, KottageKotlinKAnnotatedElement, KottageKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KottageKotlinNothing : KottageBase
@end;

__attribute__((swift_name("KotlinClassCastException")))
@interface KottageKotlinClassCastException : KottageKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface KottageKotlinIllegalArgumentException : KottageKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationException")))
@interface KottageKotlinx_serialization_coreSerializationException : KottageKotlinIllegalArgumentException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol KottageKotlinKType
@required
@property (readonly) NSArray<KottageKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<KottageKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("KotlinIndexOutOfBoundsException")))
@interface KottageKotlinIndexOutOfBoundsException : KottageKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinReadOnlyProperty")))
@protocol KottageKotlinReadOnlyProperty
@required
- (id _Nullable)getValueThisRef:(id _Nullable)thisRef property:(id<KottageKotlinKProperty>)property __attribute__((swift_name("getValue(thisRef:property:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreContext")))
@interface KottageCoreContext : KottageBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KottageKotlinByteArray : KottageBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KottageByte *(^)(KottageInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KottageKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol KottageKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinIntIterator")))
@interface KottageKotlinIntIterator : KottageBase <KottageKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KottageInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end;

__attribute__((swift_name("KotlinLongIterator")))
@interface KottageKotlinLongIterator : KottageBase <KottageKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KottageLong *)next __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface KottageKotlinIntProgressionCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (KottageKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface KottageKotlinIntRangeCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KottageKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongProgression.Companion")))
@interface KottageKotlinLongProgressionCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKotlinLongProgressionCompanion *shared __attribute__((swift_name("shared")));
- (KottageKotlinLongProgression *)fromClosedRangeRangeStart:(int64_t)rangeStart rangeEnd:(int64_t)rangeEnd step:(int64_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange.Companion")))
@interface KottageKotlinLongRangeCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKotlinLongRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KottageKotlinLongRange *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol KottageKotlinSuspendFunction2 <KottageKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction3")))
@protocol KottageKotlinSuspendFunction3 <KottageKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction5")))
@protocol KottageKotlinSuspendFunction5 <KottageKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 p5:(id _Nullable)p5 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:p5:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction4")))
@protocol KottageKotlinSuspendFunction4 <KottageKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction6")))
@protocol KottageKotlinSuspendFunction6 <KottageKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 p5:(id _Nullable)p5 p6:(id _Nullable)p6 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:p5:p6:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AtomicfuSynchronizedObject.Status")))
@interface KottageAtomicfuSynchronizedObjectStatus : KottageKotlinEnum<KottageAtomicfuSynchronizedObjectStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KottageAtomicfuSynchronizedObjectStatus *unlocked __attribute__((swift_name("unlocked")));
@property (class, readonly) KottageAtomicfuSynchronizedObjectStatus *thin __attribute__((swift_name("thin")));
@property (class, readonly) KottageAtomicfuSynchronizedObjectStatus *fat __attribute__((swift_name("fat")));
+ (KottageKotlinArray<KottageAtomicfuSynchronizedObjectStatus *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KottageKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KottageKotlinKClass>)kClass provider:(id<KottageKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KottageKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KottageKotlinKClass>)kClass serializer:(id<KottageKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KottageKotlinKClass>)baseClass actualClass:(id<KottageKotlinKClass>)actualClass actualSerializer:(id<KottageKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KottageKotlinKClass>)baseClass defaultDeserializerProvider:(id<KottageKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KottageKotlinKClass>)baseClass defaultDeserializerProvider:(id<KottageKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KottageKotlinKClass>)baseClass defaultSerializerProvider:(id<KottageKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol KottageKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KottageKotlinx_serialization_coreSerialKind : KottageBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface KottageKotlinKTypeProjection : KottageBase
- (instancetype)initWithVariance:(KottageKotlinKVariance * _Nullable)variance type:(id<KottageKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KottageKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (KottageKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KottageKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKotlinKTypeProjection *)doCopyVariance:(KottageKotlinKVariance * _Nullable)variance type:(id<KottageKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KottageKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) KottageKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("KotlinKCallable")))
@protocol KottageKotlinKCallable <KottageKotlinKAnnotatedElement>
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id<KottageKotlinKType> returnType __attribute__((swift_name("returnType")));
@end;

__attribute__((swift_name("KotlinKProperty")))
@protocol KottageKotlinKProperty <KottageKotlinKCallable>
@required
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface KottageKotlinByteIterator : KottageBase <KottageKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KottageByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface KottageKotlinKVariance : KottageKotlinEnum<KottageKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KottageKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) KottageKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) KottageKotlinKVariance *out __attribute__((swift_name("out")));
+ (KottageKotlinArray<KottageKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface KottageKotlinKTypeProjectionCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (KottageKotlinKTypeProjection *)contravariantType:(id<KottageKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (KottageKotlinKTypeProjection *)covariantType:(id<KottageKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (KottageKotlinKTypeProjection *)invariantType:(id<KottageKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) KottageKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
