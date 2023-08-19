# 单例模式

- 介绍：在整个系统生命周期里，保证一个类只能产生一个实例，确保该类的**唯一性**。

- 单例模式分类：

    - **懒汉式**：指系统运行中，实例并不存在，只有当需要使用该实例时，才会去创建并使用实例。**（这种方式要考虑线程安全）**
    - **饿汉式**：指系统一运行，就初始化创建实例，当需要时，直接调用即可。**（本身就线程安全，没有多线程的问题）**

- 单例类特点

    - 构造函数和析构函数为`**private**`类型，目的**禁止**外部构造和析构
    - `delete`拷贝构造和赋值构造函数，目的是**禁止**外部拷贝和赋值，确保实例的唯一性
    - 类里有个获取实例的**静态函数**，可以全局访问

- 懒汉式线程安全如何保证

    ```cpp
    static Singleton& Instance() {
        static Singleton singleton;
        return singleton;
    }
    ```

    > If control enters the declaration concurrently while the variable is being initialized, the concurrent execution shall wait for completion of the initialization.
    > 如果当变量在初始化的时候，并发同时进入声明语句，并发线程将会阻塞等待初始化结束。

    这样保证了并发线程在获取静态局部变量的时候一定是初始化过的，所以具有线程安全性。

