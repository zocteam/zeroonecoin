# Docker
For now the docker environment only serves development purposes.  

### Dependencies
To install the dependencies follow the instructions behind the links.  
- [Docker](https://www.docker.com/community-edition#/download)
- [Docker Compose](https://docs.docker.com/compose/install/#install-compose)

### Development
To start developing.
```
git clone git@github.com:zocteam/zeroonecoin.git
cd zeroonecoin
docker-compose up
```
Whenever you make changes a rebuild and a restart of the daemon will automatically be triggered.