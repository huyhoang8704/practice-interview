# API là gì
    - API là một tập hợp các commands, functions, protocols, objects,... giúp 2 Application có thể tương tác và trao đổi dữ liệu qua lại với nhau.
    - Ứng dụng FE giao tiếp với BE
        - BE : Xây dựng API lấy danh sách users http://api.com/users
        - FE : Sử dụng API của BE để lấy dữ liệu về

# RESTful API
    - RESTful API là một tiêu chuẩn được sử dụng trong việc thiết kế API cho các application, software để tạo sự thuận tiện cho việc quản lý các resource.
    - RESTful API là một API sử dụng các nguyên tắc của REST để giao tiếp giữa các ứng dụng. Các dịch vụ web RESTful thường sử dụng giao thức HTTP để gửi và nhận dữ liệu, và chúng được thiết kế để tương tác với tài nguyên (resources) qua các phương thức HTTP như GET, POST, PUT, DELETE.
    - Đặc điểm của RESTful API:
        + Stateless (Không trạng thái): Mỗi yêu cầu từ máy khách tới máy chủ phải chứa tất cả thông tin cần thiết để máy chủ có thể hiểu và xử lý yêu cầu. Máy chủ không lưu trữ thông tin trạng thái của người dùng giữa các yêu cầu.

        + Client-Server (Máy khách - Máy chủ): RESTful API dựa trên mô hình client-server, nơi máy khách và máy chủ được tách biệt. Máy khách thực hiện yêu cầu và máy chủ cung cấp tài nguyên.

        + Cacheable (Có thể lưu cache): Các phản hồi từ máy chủ nên được chỉ định là có thể lưu trữ hay không để cải thiện hiệu suất và giảm tải cho máy chủ.

        + Layered System (Hệ thống phân lớp): RESTful API có thể được thiết kế với các tầng trung gian (middleware) để xử lý các chức năng khác nhau như bảo mật, cân bằng tải mà không ảnh hưởng đến sự tương tác giữa máy khách và máy chủ.

        + Uniform Interface (Giao diện thống nhất): Giao diện giữa máy khách và máy chủ cần được thống nhất, điều này giúp các thành phần trong hệ thống tương tác với nhau một cách dễ dàng.

        + Resource Identification (Định danh tài nguyên): Các tài nguyên trong RESTful API được xác định bằng các URL hoặc URIs (Uniform Resource Identifiers).
    
    
# CI/CD là gì ?
`https://viblo.asia/p/ci-cd-va-devops-07LKXYXDZV4`